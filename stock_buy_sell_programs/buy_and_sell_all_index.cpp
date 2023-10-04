#include<bits/stdc++.h>
using namespace std;
void stock_all_profit_and_detail(int *arr,int n){
    int buy=0,sell=0;
    vector<int>ans;
    int hell =0;
    for(int i=1;i<n;++i){
        if(arr[i]>arr[i-1] ){
            ++sell;
            hell =1;
        }
        else if(sell==buy){
            ++sell;
            ++buy;
        }
        else{
            ans.push_back(buy);
            ans.push_back(sell);
            sell=i,buy=i;
        }
        
    }
    if(hell ==0){
        cout<<"No Profit";
        return ;
    }
    if(buy!=n-1 && sell ==n-1){
            ans.push_back(buy);
            ans.push_back(sell);
    }
    for(int i=0;i<ans.size();++i){
        if((i&1)==0) cout<<"("<<ans[i]<<" ";
        else cout<<ans[i]<<") ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    stock_all_profit_and_detail(arr,n);
    return 0;
}
