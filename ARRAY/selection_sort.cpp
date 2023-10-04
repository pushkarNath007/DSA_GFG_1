// find the minimum valeu and swap it at starting and repeat this for all element
#include<bits/stdc++.h>
using namespace std;

void printing(long int arr[],int size){
    cout<<endl;
    
    for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
}
// 2 3 4  5  6  7  1
void  selction_sort(long int arr[],int size){
    for(int i=0;i<size-1;++i){
    for(int j=size-1;j>=1+i;--j){
        if(arr[j] <arr[j-1])  swap(arr[j],arr[j-1]);
    }
    }
    //  10 9 8 7 6 5 4 3 2 1
    //  1 10 9 8 7 6 5 4 3 2     j==9
    //                           j==8  
}
int main2(){// because this file is using in selction_sort_2.cpp program
    long int arr[10];
    cout<<"Enter the array element\n";
    for(int i=0;i<10;++i){
        cin>>arr[i];
    }
    int size =10;
    selction_sort(arr,10);
    printing(arr,size);
    return 0;
}
