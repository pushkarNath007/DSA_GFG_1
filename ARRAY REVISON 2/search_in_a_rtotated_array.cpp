#include<bits/stdc++.h>
using namespace std;

bool search_in_rotated_array(int *arr,int n,int k){
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;//2; 3 +(5)/2=2;
        if(arr[mid]==k){
            return true;
        }
        else if(arr[left]<arr[mid]){
            if(k>=arr[left] && k<arr[mid]) right=mid-1;
            else  left=mid+1;
        }
        else{
            if(k>arr[mid] && k<=arr[right]) left=mid+1;
            else right=mid-1;
        }
    }
    return false;
}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    if(search_in_rotated_array(arr,n,x)) cout<<"1";
    else cout<<"-1";
    
    return 0;
}
/*


*/