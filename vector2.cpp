#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<int>> matrix){
    cout<<"entered matrix is"<<endl;
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
    cout<< "enter numbers of rows ";
    int n,m,element;
    cin>>n;
    cout<< "enter numbers of columns ";
    cin>>m;
    vector<vector<int>> matrix1(n,vector<int>(m));
    vector<vector<int>> matrix2(n,vector<int>(m));
    vector<vector<int>> matrix3(n,vector<int>(m));
    cout<< "enter elements "<< endl;  
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>element;
            matrix1[i][j]=element;
        }
    }
    cout<<"enter second matrix"<<endl;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>element;
            matrix2[i][j]=element;
        }
    }
        display(matrix1);
        display(matrix2);
        // adding two matrices;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    cout<<"sum opf two matrices is "<<endl;
    display(matrix3);
}