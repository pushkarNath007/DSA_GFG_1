#include<bits/stdc++.h>
using namespace std;

void printing(vector<int>arr){
    for(auto it:arr) cout<<it<<" ";
}

vector<int> spirally_traversing(vector<vector<int>>&arr,int r,int c){
    int startrow=0,startcol=0,endcol=c-1,endrow=r-1;
    int total=r*c;
    int count=0;
    vector<int>ans;
    while(count<total){
        for(int i=startrow,j=startcol;j<=endcol && count<total;++j){
            ans.push_back(arr[i][j]);
            ++count;
        }
        startrow++;
        for(int i=startrow,j=endcol;i<=endrow && count<total;++i){
             ans.push_back(arr[i][j]);
            ++count;
        }
        endcol--;
        for(int i=endrow,j=endcol;j>=startcol && count<total;j--){
             ans.push_back(arr[i][j]);
            ++count;
        }
        endrow--;
        for(int i=endrow,j=startcol;i>=startrow && count<total;--i){
             ans.push_back(arr[i][j]);
            ++count;
        }
        startcol++;
    }
    return ans;
}
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>>arr(r,vector<int>(c));
    int a,b;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    printing(spirally_traversing(arr,r,c));
    //printing(arr);
    return 0;
}
