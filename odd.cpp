#include<bits/stdc++.h>
using namespace std;
template <class t>
t display(vector <t> &vec1)
{
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " " ; // can use vec1.at(i) simple return the element at that index
    }
    cout<< endl;
    return 0;
} 
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    unique(v.begin(),v.end());
    
    
}