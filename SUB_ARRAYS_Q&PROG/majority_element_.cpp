#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int res=1;
    int count =1;
    int val=arr[0];
    for(int i=1;i<n;++i){
        if(res>(n/2)){
    
            break;
        }
        else if(arr[i]==val){
            ++count;
            res=max(res,count);
        }
        else {
            count =1;
            val = arr[i];
        }
    }
    if(res>n/2) cout<< val<<" ";

    return 0;
}
/*
/..........
//Majority element
int majorityele(int array[], int n){
    int res = 0, count = 1;
    for(int i = 1; i < n; i++){
        if(array[res] == array[i])
            count++;
        else
            count--;
        if(count == 0){
            res = i;
            count = 1;
        }
    }
    count = 0;
    for(int i = 0; i < n; i++){
        if(array[res] == array[i])
            count++;
    }
    if(count <= n/2)
        return -1;
    return array[res];
}*/
