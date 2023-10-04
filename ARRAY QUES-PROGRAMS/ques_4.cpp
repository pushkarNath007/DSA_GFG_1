#include<bits/stdc++.h>
using namespace std;

void bsearch(int *arr,int n,int val){
    int left=0;
    int right=n-1;
    int mid;
    while(left<right){
        mid=(left+right)/2;
        if(arr[left]==val){
                cout<<"YES"<<endl;
                break;
        } 
        else if(arr[right]==val){
             cout<<"YES"<<endl;
             break;
        }
        else if(arr[mid]==val) {
            cout<<"YES"<<endl;
            break;
        }
        else{
            if(val<arr[mid]) right =mid-1;
            else left= mid+1;
        }
        
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int val;
    cin>>val;
    bsearch(arr,n,val);
    return 0;
}
