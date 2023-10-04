#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr,arr+n);
    int left=0,right=n-1;
    int hint=0;
    while(left<right){
        int sum=arr[right]+arr[left];
        if(sum==k){
            hint=1;
            
            break;
        }
        else if(sum<k) ++left;// means u ned to icnrease the sum;
        else --right; // u need to decrease the sum
    }
    if(hint==0){
        cout<<"No"<<" ";
        
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}
