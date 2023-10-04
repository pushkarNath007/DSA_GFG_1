#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    vector<int>ans;
    int buy=0,sell=0;
    int hint=0;
    for(int i=1;i<n;++i){
        if(arr[i]>arr[i-1]){
            ++sell;
            hint =1;// means  there is atleast one profit is there 
        }
        else if(buy==sell){// means there is another buying day 
            ++sell,++buy;
        }
        else{// buy != sell and we found another buy day means there is profit already
            ans.push_back(buy);
            ans.push_back(sell);
            buy=sell=i;// moving to new buy and sell day
        }
    }
    // there must be last buy and sell profit as the loop ends at last index
    if(hint ==1){// means there is atleast one profit is there
        if(buy!=n-1 && sell == n-1){
            ans.push_back(buy);
            ans.push_back(sell);
        }
        
    }
    else{
        ans.push_back(-1);
    }
    for(int i=0;i<ans.size();++i){
                cout<<ans[i]<<" ";
    }
    // or u can simple check if ans is empty  means no profit sell == buy till loop ends instead of hint 
    return 0;
}
