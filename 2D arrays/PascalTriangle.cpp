// Pascal Triangle.

/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pascaltriangle(int n){
    
    vector<vector<int>> ans(n);
    for(int i=0;i<n;i++){
        ans[i].resize(i+1);
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                ans[i][j]=1;
            }
            else{
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
        }
    }
    
    return ans;
}

int main(){
    int n;
    
    cin>>n;
    
    vector<vector<int>> a;
    
    a = pascaltriangle(n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
