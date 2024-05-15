#include <bits/stdc++.h>
using namespace std;
template <typename t>
t display(vector<t> &vec1)
{
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " " ; // can use vec1.at(i) simple return the element at that index
    }
    cout<< endl;
    return 0;
}
int main()
{
    int ele,size;
    vector<int> v1; // resizable , here length is zero
    vector<int> v2(4); // here size is defined as 4
    vector<int> v3(v2); // here size is defined as 4 from v2
    vector<double> v4(4,3); // vector={3,3,3,3} 
    display(v4);
    cout<<"enter size of vector ";
    cin >> size;
    for (int i=0; i < size; i++)
    {
        cout << "enter an element to add: ";
        cin >> ele;
        v1.push_back(ele);
    }


    display(v1);
    v1.pop_back();
    vector<int > :: iterator itr;
    itr = v1.begin();
    v1.insert(itr,566);
    // v1.insert(itr,n,566); here 'n determines the number of copies of element we want to insert
     display(v1);
    return 0;
    
}