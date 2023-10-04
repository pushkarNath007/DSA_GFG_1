#include<bits/stdc++.h>
using namespace std;


void counting(int arr[],int n){
    int positive =0,negative=0,zero=0;
    
    int left=0;
    int right=n-1;
    while(left<=right){
        if(left==right){
            if(arr[left]>0) ++positive;
            else if(arr[left]==0) ++zero;
            else ++negative;
            ++left;
        }
        else {
            if(arr[left]>0) ++positive;
            else if(arr[left]==0) ++zero;
            else ++negative;
            ++left;
            if(arr[right]>0) ++positive;
            else if(arr[right]==0) ++zero;
            else ++negative;
           --right;
        }
    
    }
   /*for(int i=0;i<n;++i){
       if(arr[i]==0) ++zero;
       else if(arr[i]>0) ++positive;
       else ++negative;
   }*/
   cout<<negative<<" "<<zero<<" "<<positive<<endl;
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
/*left rotate an array by one.
void leftrotatebyone(int array[], int n){
    int temp = array[0];
    for(int i = 1; i < n; i++){
        array[i-1] = array[i];
    }
    array[n-1] = temp;
}*/
/*
void reversee(int array[], int n, int start, int end){
    while(start <= end){
        swap(array[start++], array[end--]);
    }
}

void leftrotatebyD(int array[], int n, int d){
    reversee(array, n, 0, d-1);
    reversee(array, n, d, n-1);
    reversee(array, n, 0, n-1);
}*/