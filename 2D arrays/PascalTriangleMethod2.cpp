// Pascal Triangle.

/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/

/*

nCr = n!/(n-r)!r!

*/

#include<bits/stdc++.h>
using namespace std;

int fact(int k){
    int f = 1;
    
    for(int i=2;i<=k;i++){
        f = f*i;
    }
    return f;
}

void pascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                cout<<"1 ";
            }
            else{
                int ans = fact(i)/(fact(i-j)*fact(j));
                
                cout<<ans<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    
    int n;
    cin>>n;
    
    pascal(n);
    
    

    return 0;
}
