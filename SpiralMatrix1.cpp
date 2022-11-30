
#include <iostream>
#include<vector>

using namespace std;
// Spiral matrix code.
void spiralPattern(vector<vector<int>> &a){
    int top=0,left = 0;
    int direction=0;
    int right = a[0].size()-1;
    int bottom = a.size()-1;
    
    while(left<=right && top<=bottom){
        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<a[top][i]<<" ";
            }
            top++;
        }
        else if(direction==1){
            for(int i=top;i<=bottom;i++){
                cout<<a[i][right]<<" ";
            }
            right--;
        }
        else if(direction==2){
            for(int i=right;i>=left;i--){
                cout<<a[bottom][i]<<" ";
            }
            bottom--;
        }
        else{
            for(int i=bottom;i>=top;i--){
                cout<<a[i][left]<<" ";
            }
            left++;
        }
        direction = (direction+1)%4;
    }
}

int main()
{
    int m,n;
    
    cin>>m>>n;
    
    vector<vector<int>> v(m,vector<int> (n));
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    
    // displaying the 2D array elements
    
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    spiralPattern(v);

    return 0;
}
