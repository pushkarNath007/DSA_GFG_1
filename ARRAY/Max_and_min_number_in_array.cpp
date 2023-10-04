#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={2,3,67,54,34,32};
    /*int maxi=INT_MIN;
    int mini=INT_MAX;
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;++i){
        maxi= max(maxi,arr[i]);
        mini =min(mini,arr[i]);
    }
    cout<<endl<<maxi<<endl<<mini<<endl;*/
    int maxi = arr[0];
    int mini= arr[1];
    if(mini>maxi) swap(maxi,mini);
    for(int i=2;i<6;++i){
        if(arr[i]>maxi)  maxi = arr[i];
        else{
            mini=min(mini,arr[i]);
        }
    }
    
    return 0;
}