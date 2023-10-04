#include<bits/stdc++.h>
using namespace std;

void partition (int *arr,int left,int mid,int right){
    int i=left;
    int j=mid+1;
    int k=left;
    vector<int>ans(right+1);
    while(i<=mid &&j<=right){
        if(arr[i]<=arr[j]){
            ans[k++]=arr[i++];
            
        }
        else {
            ans[k++]=arr[j++];
        }
    }
    while(i<=mid ||j<=right){
        if(i<=mid){
            ans[k++]=arr[i];
            i++;
        }
        else{
            ans[k++]=arr[j];
            j++;
        }
    }
    for(int l=left;l<=right;++l){
        arr[l]=ans[l];
    }
}
void mergesort(int *arr,int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(arr,left,mid);  
        mergesort(arr,mid+1,right);
        partition(arr,left,mid,right);
    }
}
void decode()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    mergesort(array, 0, n-1);
    for(auto it : array){
        cout << it << " ";
    }
}

int32_t main()
{
    decode();
    return 0;
} /*                            0    1    2     3      4   5   6     7
                                10   5    30    23    13   8    15  12
                              s                 m                     e 
                   10    56  30  23              13  8  15 12             
                   l     m        r
                   10 56   23 30                    13   8  
                                                13      8
                                23   30
            10   56            30   23
            l    r
            m
        10          56
                    l r m
        l r   
        m
        */