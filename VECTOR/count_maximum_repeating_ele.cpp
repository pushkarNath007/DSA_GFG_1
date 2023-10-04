#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int count=1;
    int res=1;
    for(int i=0;i<arr.size();++i){
        if(arr[i]==arr[i-1]){
            ++count;
            res=max(res,count);
        }
        else{
            count=1;
        }
    }
    cout<<res<<endl;
    return 0;
}
