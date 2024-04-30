
#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n],ele,c=0,a[100]={0};
    for (int i=1;i<=n;i++){
        cin>>ele;
        a[ele]+=1;
    }
    if(n<=2){
        cout<<0<<endl;
        continue;
    }
    for(int i=1;i<100;i++){
        if(a[i]>2){
            c=c+a[i]/3;
        }
        
}
cout<<c<<endl;
}}