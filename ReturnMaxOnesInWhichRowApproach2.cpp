
// Approach-1

#include <bits/stdc++.h>
using namespace std;

int maxOnesRow(vector<vector<int>> &v){
    int i = v[0].size()-1;
    int ind=-1;
    int maxOnesRow = 0;
    while(i>=0 && v[0][i]==1){
        ind = i;
        maxOnesRow=0;
        i--;
    }
    
    for(int j=1;j<v.size();j++){
        while(i>=0 && v[j][i]==1){
            ind = i;
            i--;
            maxOnesRow = i;
            
        }
    }
    return maxOnesRow;
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
