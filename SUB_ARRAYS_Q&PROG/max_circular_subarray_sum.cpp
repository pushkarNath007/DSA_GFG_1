#include<bits/stdc++.h>
using namespace std;

int  normal_array_max_sum_subarray(int *arr,int n){
    int maxi=arr[0];
    int res=arr[0];
    for(int i=1;i<n;++i){
        maxi=max(maxi+arr[i],arr[i]);
        res=max(maxi,res);
    }
    return res;
}
int minimum_sum_subarray(int *arr,int n){
    int mini=arr[0];
    int res=arr[0];
    for(int i=1;i<n;++i){
        mini=min(mini+arr[i],arr[i]);
        res=min(res,mini);
    }
    return res;
}
int  Circular_array_max_sum_subarray(int *arr,int n){
    // for finding circular array subarray we need to minus min sum subarray with total sum
    int total=0;
    for(int i=0;i<n;++i){
        total+=arr[i];
    }
    int mini=minimum_sum_subarray(arr,n);
    int circularsubarray_sum;
    //corner case if min sum = = total sum then which means nothing has to be done 
    if(mini==total) circularsubarray_sum=total;
    else
     circularsubarray_sum=total- mini;
    return circularsubarray_sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    // first we should find normal array max sum subarray
    int normalsubarray=normal_array_max_sum_subarray(arr,n);
    // now we have to find circular subarray 
    int circular_subarray_sum=Circular_array_max_sum_subarray(arr,n);
    // the max between these two will be tha max circular subarray sum;
    int max_circular_subarray_sum=max(normalsubarray,circular_subarray_sum);
    cout<<max_circular_subarray_sum<<endl;
    return 0;
}

/*
// maximum circular subarray sum;

int kadanesAlgorithm(int array[], int n){
    int res = array[0];
    int maxxi = array[0];
    for(int i = 1; i < n; i++){
        maxxi = max(maxxi + array[i], array[i]);
        res = max(res, maxxi);
    }
    return res;
}
int circularsubarraysum(int array[], int n){
    int maxsubarraysum = kadanesAlgorithm(array, n);
    if (maxsubarraysum < 0){
        return maxsubarraysum;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += array[i];
        array[i] = -array[i];
    }
    int maxcirsubarraysum = sum + maxsubarraysum;
    return max(maxcirsubarraysum, maxsubarraysum);
}*/