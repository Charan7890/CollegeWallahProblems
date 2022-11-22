// Transpose of a matrix.
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int m,n;
    cout<<"Enter row and column number:";
    cin>>m>>n;
    
    int a[m][n];
    
    cout<<"Enter 2-D array elements:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    int ans[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j] = a[j][i];
        }
    }
    
    cout<<"The elements are:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    


    
    return 0;
}
