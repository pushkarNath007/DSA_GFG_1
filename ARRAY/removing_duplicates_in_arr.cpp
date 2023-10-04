#include<bits/stdc++.h>
using namespace std;
void deleting(int *arr,int delet,int n){
    for(int i=delet;i<n;++i){// here at last time when i at last index it willl go infinite 
         arr[i]=arr[i+1];               //since it will compare with  next same index value 
                        // so we are also adding that 0 or junk value at last which will be there in case of
                        // next block or index so last index wont be same an }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;++i){
        while(arr[i]==arr[i+1]) {
            deleting(arr,i+1,n);
          --n;
        }
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
