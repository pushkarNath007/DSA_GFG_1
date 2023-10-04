#include<bits/stdc++.h>
using namespace std;

void frequency(int *arr,int n ,int val){
    int left=0;
    int right=n-1;
    int count=0;

    while(left<=right){
        if(left==right) {
            if(arr[left++]==val)
                ++count;//4
        }
        else{
        if(arr[left++]==val) ++count;//  3 
        if(arr[right--]==val) ++count;// 1 2  
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
    int val;
    cin>>val;
    frequency(arr,n,val);
    return 0;
}
