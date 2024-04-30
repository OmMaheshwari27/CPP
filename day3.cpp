#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
int main(){
    array<int,5>arrayname={1,2,3,4,5};
    array<int,5>arrayname2={10,20,30,40,50};
    cout<<arrayname.size()<<endl;
    for(int i=0;i<arrayname.size();i++){
        cout<<arrayname[i]<<endl;
    }
    cout << "-----------------"<< endl;
    for (int x:arrayname){
        cout << x<< endl;
    }
     cout << "-----------------"<< endl;
    arrayname[6]=10;
    for(auto x:arrayname){
        cout << x<< endl;
    }
    cout << "-----------------"<< endl;
    cout<<arrayname.front()<< ""<<arrayname.back()<<endl;
    arrayname.swap(arrayname2);
    arrayname2[6]=55;
    cout << "-----------------"<< endl;
        for (int x:arrayname){
        cout << x<< endl;
    }
    cout << arrayname2.at(0)<< endl;
    cout<< "sorting"<<endl;
    sort(arrayname2.begin(),arrayname2.end());
            for (int x:arrayname2){
        cout << x<< endl;
    }
}
// int main(){
//     array<float,5>arr={};
//     float y=0;
//         for (int i=0;i<arr.size();i++){
//         cin >> arr[i];
//     }
//     for(float x:arr){
//         cout << x<< endl;
//         y=y+x;
//     }
//     y=y/arr.size();
//     cout<< "average=" << y<< endl;

// }