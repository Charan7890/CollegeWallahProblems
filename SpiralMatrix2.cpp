
#include <iostream>
#include<vector>

using namespace std;
// Spiral matrix code.
void spiralPattern(vector<vector<int>> &a){
    int top=0,left = 0;
    int direction=0;
    int right = a[0].size()-1;
    int bottom = a.size()-1;
    int input=0;
    while(left<=right && top<=bottom){
        if(direction==0){
            for(int i=left;i<=right;i++){
                a[top][i] = input++;
            }
            top++;
        }
        else if(direction==1){
            for(int i=top;i<=bottom;i++){
                a[i][right] = input++;
            }
            right--;
        }
        else if(direction==2){
            for(int i=right;i>=left;i--){
                a[bottom][i]=input++;
            }
            bottom--;
        }
        else{
            for(int i=bottom;i>=top;i--){
                a[i][left]=input++;
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
    
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>v[i][j];
    //     }
    // }
    
    spiralPattern(v);
    // displaying the 2D array elements
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}


/* 
OUTPUT:
3 4
0 1 2 3
9 10 11 4
8 7 6 5

