// that element element has to be greater no till its all right side element
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<ans.size();++i){
        cin>>ans[i];
    }
    int maxi=INT_MIN;
    cout<<ans[n-1]<<" ";
    for(int i=n-2;i>=0;--i){
        maxi=max(maxi,ans[i+1]);
        if(ans[i]>maxi) cout<<ans[i]<<" ";
    }
    return 0;
}
