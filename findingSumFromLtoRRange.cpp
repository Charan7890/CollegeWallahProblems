/*
Scenario:

Given an array of n integers.
user asks you 'Q' queries.
Each query takes two inputs from the user i.e., L and R.
L and R are two int type variables.

statement:
Need to find the sum of array from index position L to R.

NOTE: index starts from 1 in an array.

*/

#include <bits/stdc++.h>

using namespace std;
void prefixSum(vector<int> &v){
    // finding prefix sum and storing in an existing array.
    
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
}

int sumFromLToR(vector<int> &v,int L,int R){
    
    
    int answer = v[R] - v[L-1];
    
    return answer;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> v(n+1,0);
    
    for(int i=1;i<n+1;i++){
        int ele;
        cin>>ele;
        v[i] = ele;
    }
    
    int q;
    cout<<"Enter number of queries:";
    cin>>q;
    // calling prefix sum function
    prefixSum(v);
    
    while(q--){
        int L,R;
        cin>>L>>R;
        
        int res = sumFromLToR(v,L,R);
        
        cout<<res<<endl;
        
    }
    
    return 0;
}

