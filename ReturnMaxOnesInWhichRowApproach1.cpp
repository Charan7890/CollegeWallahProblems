
// Approach-1

#include <bits/stdc++.h>
using namespace std;

int maxOnesRow(vector<vector<int>> &v){
    int m = v.size();
    int n = v[0].size();
    int cpy = -1;
    int maxOneRow = -1;
    int rowNum = -1;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==1){
                cpy = n - j;
                if(maxOneRow<cpy){
                    maxOneRow = cpy;
                    rowNum = i;
                }
                break;
            }
        }
    }
    return rowNum;
}


int main()
{
    int m,n;
    cin>>m>>n;
    
   vector<vector<int>> V(m,vector<int> (n));
    int a;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a;
            V[i].push_back(a);
        }
    }
    
    int rowNo = maxOnesRow(V);
    
    cout<<"the row number is:"<<rowNo;
    return 0;
}
