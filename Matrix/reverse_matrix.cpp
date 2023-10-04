#include<bits/stdc++.h>
using namespace std;

void printing(vector<vector<int>>arr){
     int r=arr.size();
    int c=arr[0].size();
    cout<<endl<<endl;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(vector<vector<int>>&arr){
    for(int i=0;i<arr.size()-1;++i){
        for(int j=i+1;j<arr[0].size();++j){
            swap(arr[j][i],arr[i][j]);
        }
    }
    //printing(arr);
}
void reverse(vector<vector<int>>&arr){
    int r=arr.size();
    int c=arr[0].size();
    for(int i=0;i<r/2;++i){
        for(int j=0;j<c;++j){
            swap(arr[i][j],arr[r-1-i][j]);
        }
    }
    //printing(arr);
}

int main(){
    int r,c;
    cin>>r>>c;
    // int arr[r][c]
    vector<vector<int>>arr(r,vector<int>(c));
    // 
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>arr[i][j];
        }
    }
    transpose(arr);
    reverse(arr);
    printing(arr);
    return 0;
}
