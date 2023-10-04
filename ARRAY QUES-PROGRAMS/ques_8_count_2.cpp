#include<bits/stdc++.h>
using namespace std;

void count_2s(int arr[],int n){
    int left=0;
    int right=n-1;
    int count=0;
    while(left<=right){
        if(left==right){
            if(arr[left++]==2) ++count;
        } 
        else{
            if(arr[left++]==2) ++count;
            if(arr[right--]==2) ++count;
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
    count_2s(arr,n);
    return 0;
}
