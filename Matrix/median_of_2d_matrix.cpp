#include<bits/stdc++.h>
using namespace std;

int median_of_row_wise_sorted_array(vector<vector<int>>&arr){
    int r=arr.size();
    int c=arr[0].size();
    int low =0,high=2000;
    while(low<=high){
        int middle =(low+high)/2;
        int i=0;
        int count=0;
        while(i<arr.size()){
            int left=0,right=arr[0].size()-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(arr[i][mid]<=middle) left=mid+1;
                else right=mid-1;
            }
            count+=left;
            ++i;
        }
        if(count<=((r*c)/2)) low=middle+1;
        else high=middle-1;
    }
    return low;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<arr.size();++i){
        for(int j=0;j<arr[0].size();++j){
            cin>>arr[i][j];
        }
    }
    cout<<median_of_row_wise_sorted_array(arr);
    return 0;
}
