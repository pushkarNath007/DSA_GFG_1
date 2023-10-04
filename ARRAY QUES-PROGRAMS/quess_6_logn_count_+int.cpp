#include<bits/stdc++.h>
using namespace std;

void counting(int arr[],int n){
    int count=0;
    int left=0;
    int right=n-1;
    while(left<=right){
        if(left==right && arr[left++]>-1) ++count;
        else {
            if(arr[left++]>-1) ++count;
            if(arr[right--]>-1) ++count;
        }
    }
    cout<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
     counting(arr,n);
    return 0;
}
