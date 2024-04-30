#include <iostream>
#include <list>
#include<bits/stdc++.h>
using namespace std;

void display(list<int> lst){
    for (int x:lst){
        cout << x<<"-->";
    }
    cout<<"Null"<<endl;
}

int main(){
    map<string,int>mapp;
    list<int>lst;
    lst={1,2,3,4,5,5,6,77,78};
    display(lst);
    lst.push_back(9);// add new element to the last
    lst.push_front(9);// add new element to the front 
    display(lst);
    lst.pop_back();// delete last el;ement from the list
    display(lst);
    lst.pop_front();// delete front element from the list
    display(lst);
    lst.remove(2);// remove the specific element. can we used when we dont know the index
    display(lst);
    cout<<"front element is"<<lst.front()<<endl;
    cout<<"last element is"<<lst.back()<<endl;
    cout<<"list size is "<<lst.size()<<endl;
    {auto itr=find(lst.begin(),lst.end(),3);
    itr++;
    lst.insert(itr,20);
    display(lst);}// working as insert after
    {auto itr=find(lst.begin(),lst.end(),3);
    lst.insert(itr,21);
    display(lst);}// working as insert before
    lst.sort(greater<int>());
    display(lst);
    cout<< *min_element(lst.begin(),lst.end())<<endl;
    cout<< *max_element(lst.begin(),lst.end())<<endl;
    display(lst);
    for(auto itr=lst.begin();itr!=lst.end();itr++){
        cout<< *itr<< "  ";
    }
    return 0;
}
