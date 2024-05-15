#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<int>> matrix){
    for (auto x:matrix){
        for(auto y:x){
            cout << y<< " ";
        }
        cout<<endl;
    
    }
        cout<<"------------"<<endl;
}

int main()
{
    cout<< "enter numbers of rows of 1st ";
    int m,n,element;
    cin>>m;
    cout<< "enter numbers of columns 1st ";
    cin>>n;
    cout<< "enter numbers of rows 2nd";
    int p,q;
    cin>>p;
    cout<< "enter numbers of columns 2nd";
    cin>>q;
    vector<vector<int>> matrix1(n,vector<int>(m));
    vector<vector<int>> matrix2(p,vector<int>(q));
    if(n==p){
        vector<vector<int>> matrix3(m,vector<int>(q));
    cout<< "enter elements "<< endl;  
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>element;
            matrix1[i][j]=element;
        }
    }
    cout<<"enter second matrix"<<endl;
        for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>element;
            matrix2[i][j]=element;
        }
    }
    cout<<"entered matrix is "<<endl;
        display(matrix1);
        cout<<"entered matrix is "<<endl;
        display(matrix2);
        // multiplying two matrixes;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k= 0; k < n; k++){
          matrix3[i][j]+=matrix1[i][j]*matrix2[i][j];
        }}
    }
    cout<<"multiplication of two matrices: "<<endl;
    display(matrix3);
    }
    else{
        cout<<"MATRIX MULTIPLICATION IS NOT POSSIBLE "<<endl;
    }
    
}