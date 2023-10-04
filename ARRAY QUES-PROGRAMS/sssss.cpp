#include<bits/stdc++.h>
using namespace std;
int firstIndex(int a[], int n) 
    {
        int left=0;
        int right=n-1;
        if(a[right]==0) return -1;
        int mid;
        while(left<=right){ 
            mid=(left+right)/2;//mid == 1;
            
           if(a[left]==0) ++left;
            else return left;
            
            if(a[right]==1){
                if(a[right]==1 &&a[right-1]==1) --right;
                else return right;
            }
            else  return (right+1);
            
            if(a[mid]==0){
                left=mid+1;
                
            }
            else right=mid;
        }
        return -1;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<firstIndex(arr,n)<<endl;
    return 0;
}
