// leftside sum== rightsum
/*  so two ways can be  point where left side = right */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
    }
    int diff=0;
    for(int i=0;i<n;++i){
        sum-=arr[i];
        if(sum==diff){
            cout<<i<<" ";
            exit(0);
        }
        diff+=arr[i];
    }
    cout<<"-1"<<endl;
    return 0;
}

