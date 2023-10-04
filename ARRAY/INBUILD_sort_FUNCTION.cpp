// arrange the element in its actual position
#include<iostream>
//#include"selection_sort.cpp"
#include<algorithm>
#include<cstdlib>
using namespace std;

void printing( int arr[],int size){
    cout<<endl;
    
    for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={2,3,4,5,4,8,9,45,66,6};
    printing(arr,10);
    sort(arr,arr+10);// &arr[10] -> next block of last index address is required 
    printing(arr,10);
    return 0;
}
/*  
    &arr[10] but index is till  9   so why we sue 10th index because sort function required range like 
    to move from 1 to n  u need to give 1 to n+1
    like   
    sort( base address ,   next contigeous block address of the last index  )
                                                    |
                                                    means next block address wghich comes after last 
                                                    index of array
*/