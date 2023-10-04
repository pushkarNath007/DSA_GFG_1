#include<bits/stdc++.h>
//#define MAX 100
using namespace std;
void printing(vector<vector<int>>arr,int r,int c){
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rotate(vector<vector<int>>&arr,int n){
    for(int i=0;i<n;++i){
        for(int j=0;j<n/2;++j){
            swap(arr[i][j],arr[i][n-1-j]);
        }
    }
}
void transpose(vector<vector<int>>&arr,int n){
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
/*void rotate(int arr[][MAX],int r,int c){
    for(int i=0;i<r;++i){
        for(int j=i;j<c;++j){
            swap(arr[j][i],arr[i][j]);
        }
    }
    for(int i=0;i<r/2;++i){
        for(int j=0;j<c;++j){
            swap(arr[i][j],arr[(r-1)-i][j]);
        }
    }
    printing(arr,r,c);
}*/
void even_col(vector<vector<int>>&arr,int n){
    for(int col=0;col<n/2;++col){
        for(int row=0;row<n;++row){
            swap(arr[row][col],arr[n-1-row][n-1-col]);
        }
    }
}
void odd_col(vector<vector<int>>&arr,int n){
    for(int col=0;col<n/2;++col){
        for(int row=0;row<n;++row){
            swap(arr[row][col],arr[n-1-row][n-1-col]);
        }
    }
    for(int col=n/2,row=0;row<n/2;++row){
        swap(arr[row][col],arr[n-1-row][col]);
    }
}
void rotate_180(vector<vector<int>>&arr,int n){
    if((n&1)==0) even_col(arr,n);
    else odd_col(arr,n);
}
void rotate_90(vector<vector<int>>&arr,int n){

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    //rotate(arr,n,m);
    rotate_180(arr,n);
    printing(arr,n,m);
    return 0;
}
