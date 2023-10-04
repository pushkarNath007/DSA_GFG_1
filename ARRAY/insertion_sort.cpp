// we move forward and insert the val at its position
#include<bits/stdc++.h>
using namespace std;
void printing( int arr[],int size){
    cout<<endl;
    
    for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
}
void insertion_sort(int *arr,int size){
    for(int i=1;i<size;++i){
        int j=i-1;
        int val=arr[i];
        while(arr[j]>val&&j>=0){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=val;
    }
}
void solve(){
    int arr[]={23,43,12,67,43,11,3,78,32,54,23,2,87,564,454,353,353,363,6748,43};
    int size =sizeof(arr)/sizeof(int);
    printing(arr,size);
    insertion_sort(arr,size);
    printing(arr,size);
}
int main(){
     solve();
    return 0;
}
/*
eg -  take any normal array
    array      = >     [7][5][1][2][4]   int val = 5
insertion sort = >      we set the index in increase otrder while moving and check every value  if its small
                        than move elemets bigger than val to their next index
                        because every idex value till that val is sorted 
                        and when we find the element smaller than the val we insert the val
                        to its next index;

                1st step = compare   7 and 5  
                                    and if 7 >5 then 
                                    move 7 to its next index 
                                    so we previous stored the checking value in a variable 
                                    and give that val from var to that index
                after 1st step = [5] [7] [1] [2] [4]
                now 1 <7 so      [1] [5] [7] [2] [4]                   int val = 2

*/