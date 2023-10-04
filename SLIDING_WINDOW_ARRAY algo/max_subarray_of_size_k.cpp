#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int maxi=0;
    int sum=0;
    int count =0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        ++count;
        if(count>k){
            sum-=arr[i-k];//i =3 -3 =0// 4-3=1
            --count;
        }
        
        maxi=max(sum,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}
