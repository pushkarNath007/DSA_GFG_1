#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;++i){

    }
    return 0;
}
/*
int maxConsecutive(int array[], int n){
    int count  = 0;
    int res = 0;
    for(int i = 0; i < n; i++){
        if(array[i] != 0){
            count++;
            res = max(res, count);
        }
        else
        {
            count = 0;
        }
    }
    return res;
}

 for(int i = 0; i < n; i++){
            b[i] = a[i];
        }
        
        for(int i = 0; i < n; i++){
            a[i] = b[b[i]];
        }

        /maximum subarray sum using kadane's algorithm.

int kadanesAlgorithm(int array[], int n){
    int res = array[0];
    int maxxi = array[0];
    for(int i = 1; i < n; i++){
        maxxi = max(maxxi + array[i], array[i]);
        res  = max(res, maxxi);
    }
    return res;
}
*/