#include<bits/stdc++.h>
using namespace std;

int kth_element(vector<vector<int>>&arr,int k){
    int r=arr.size();
    int c=arr[0].size();
    int low=arr[0][0],high=arr[r-1][c-1];
    while(low<=high){
        int middle=(low+high)/2;
        int count =0;
        for(int i=0;i<r;++i){
            int left=0,right=c-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(arr[i][mid]<=middle) left=mid+1;
                else right=mid-1;
            }
            count+=left;
        }
        if(count<=(k-1)) low=middle+1;
        else high= middle-1;
    }
    return low;
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<arr.size();++i){
        for(int j=0;j<arr[0].size();++j){
            cin>>arr[i][j];
        }
    }
    cout<<kth_element(arr,k);
    return 0;
}
