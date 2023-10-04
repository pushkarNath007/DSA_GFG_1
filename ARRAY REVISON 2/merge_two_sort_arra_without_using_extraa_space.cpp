

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr1[m];
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<m;++i) cin>>arr1[i];
    int i=0,j=0,k=n-1;
    while(i<=k){
        if(arr1[j]<=arr[i]){
            swap(arr1[j++],arr[k--]);
        }
        else ++i;
    }
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    for(auto x:arr) cout<<x<<" ";
    cout<<endl;
    for(auto x:arr1) cout<<x<<" ";
    return 0;
}

/* two family are there
and one family( upper family or first array) is a intelligent family
and other family is a normal family
and there is a trend in inteliggent family that  every person from that intelligent family neend to have the 
best iq and if not they get replaced with intelligent person from ordinary family
and intelligent family put their member order acc to their iq means 
the person who have the least iq among all otger comes at last 
 
*/