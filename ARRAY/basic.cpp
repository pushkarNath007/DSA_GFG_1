// array 
//  int  
// array
#include<bits/stdc++.h>
using namespace std;

void reverse(int ptr[], int n){
    int left=0,right=n-1;
    while(left<right){// left == right 
        swap(ptr[left],ptr[right]);
        //   ptr[1],ptr[7];
        left++;
        right--;
    }
}
int main(){//            lr
    int n=9;// 0 1  2  3 4 5 6 7  8
    int arr[]={9,18,17,6,0,4,17,9,11};// n =9
       reverse(arr,n);
       cout<<endl;
    return 0;
}
// int a =3 ,b =6;
// int c= ;
// max(a,b)
// <algorithm>
// int a =8 , b =9;
// swap(a,b);
// a= 9 , b =8;
//  arr 
// arr=