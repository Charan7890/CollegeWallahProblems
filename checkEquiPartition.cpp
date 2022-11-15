// code written using the concept of prefix sum.

#include <bits/stdc++.h>

using namespace std;

bool checkEquiPartition(vector<int> &v){
    int total = 0;
    for(int i=1;i<v.size();i++){
        total+=v[i];
    }
    int prefix_sum = 0;
    int suffix_sum = 0;
    for(int i=1;i<v.size();i++){
        prefix_sum += v[i];
        suffix_sum = total - prefix_sum;
        if(prefix_sum==suffix_sum){
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> v(n+1,0);
    
    for(int i=1;i<n+1;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    bool ans = checkEquiPartition(v);
    
    if(ans==0){
        cout<<"Equi partition doesn't exists"<<endl;
    }
    else{
        cout<<"Equi partition exists";
    }
    
    

    return 0;
}
