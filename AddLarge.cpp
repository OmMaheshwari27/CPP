#include <bits/stdc++.h>
#include<iostream>
#include <list>
using namespace std;

void display(list<int> lis){
    for (auto x:lis){
    cout << x<<"-->";
}
    cout<<"Null"<<endl;
}

int main(){

list<int>lis1{1,2,3,4};
list<int>lis2{1,1};
list<int>lis3;
int sum,carry=0,digit;
lis1.reverse();
lis2.reverse();
list<int>::iterator itr1,itr2;
itr1=lis1.begin();
itr2=lis2.begin();
while(itr1!=lis1.end() && itr2!=lis2.end())
{
    sum=*itr1 +*itr2+carry;
    digit=sum%10;
    carry=sum/10;
    lis3.push_front(digit);
    itr1++;
    itr2++;

}
while(itr1!=lis1.end())
{
    sum=*itr1 +carry;
    digit=sum%10;
    carry=sum/10;
    lis3.push_front(digit);
    itr1++;
 

}
while(itr2!=lis2.end())
{
    sum=*itr2+carry;
    digit=sum%10;
    carry=sum/10;
    lis3.push_front(digit);
  
    itr2++;
}
if(carry){
    lis3.push_front(carry);
}
// for(auto x:lis3){
//     cout<<x<<"-->";
// }


display(lis3);
return 0;
    
}
