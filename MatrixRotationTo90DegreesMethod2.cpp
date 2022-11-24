// Method-2

#include <bits/stdc++.h>
using namespace std;

void rotation(vector<vector<int>> &v){
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
}

int main()
{
    int n;
    // Square matrix
    cout<<"Enter the value of n:";
    cin>>n;
    
    vector<vector<int>> a(n,vector<int> (n));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    rotation(a);
    cout<<"After rotating matrix to 90 degrees:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
