
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mapp;
    mapp["om"]=69;
    mapp["ram"]=79;
    mapp["ot"]=129;
    mapp["oth"]=69;
    mapp["hym"]=69;
    mapp.insert({{"siddhant",78},{"srijan",77}});
    map<string,int> :: iterator itr;
    for(itr=mapp.begin();itr!=mapp.end();itr++){
        cout<<(*itr).first<< " "<< (*itr).second<<"\n";
    }
    cout<< "size of map is"<< mapp.max_size()<<endl;
    cout<< "actual size of map is"<< mapp.size()<<endl;
    cout<< "the empty's value of map is"<< mapp.empty()<<endl;

} 