//find the largest element and swap it or move it to the last index and repeat the process
#include<bits/stdc++.h>
#include"selection_sort.cpp"
using namespace std;

void bubble_sort(long int arr[],int size){
    for(int i=0;i<size-1;++i){ 
    for(int j=0;j<size-1-i;++j){
        if(arr[j]>arr[j+1])  swap(arr[j],arr[j+1]);
    }
    }
}
/*
at last i = size -1 because 14 -13 =1 at last and j will compare for one time for j and j+1 for 0th index
*/
int main(){
    long int arr[]={23,43,12,67,43,11,3,78,32,54,23,2,87,564,454,353,353,363,6748,43};
    int size =sizeof(arr)/sizeof(int);
    printing(arr,size);
    bubble_sort(arr,size);
    printing(arr,size);
    return 0;
}
/*
   no of element *each element size/
                                    each element size= sizeof(arr)/sizeof(int)

                                    15 *4  
                                          / 4
*/