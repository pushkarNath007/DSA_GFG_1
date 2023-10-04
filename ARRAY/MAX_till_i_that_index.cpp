#include<iostream>
#include<climits>
#include<algorithm>
int main(){
    int arr[]={2,5,36,39,25,2,94,3,34,26,34,47,56,22,9,46,49,234};
    int size=sizeof(arr )/sizeof(int);
    int maxi=INT_MIN;
    for(int i=0;i<size;++i){
        maxi=std::max(maxi,arr[i]);
        std::cout<<maxi<<std::endl;
    }
    return 0;
}