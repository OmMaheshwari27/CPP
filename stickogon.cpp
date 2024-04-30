#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define PI 3.141592653589793238462
#define ll long long int
#define set_bits __builtin_popcountll
 #define each(a,x) for(auto &a: x)
    #define read(a) each(x, a) { cin>>x; }
    #define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl
using vi=vector<int>;
using vll=vector<ll>;
void solve(){
    ll n,ans=0;
    cin>>n;
    vll v(n);
    read(v);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(auto it:mp){
        if(it.second>=3){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){
   ll t;
    cin>>t;
    while(t--){
        solve();
    }
}