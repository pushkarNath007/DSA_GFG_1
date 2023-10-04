#include<bits/stdc++.h>
using namespace std;

void  move_element(int *arr,int n,int d){
        for(int i=0,j=0;i<n &&j<n;){
            if(arr[j]==d){
                if(arr[i]==d) ++i;
                else swap(arr[j],arr[i]);
            }
            else{
                ++i;
                ++j;
            }
        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int d;
        cin>>d;// element to be move at end;
        move_element(arr,n,d);
        for(int i=0;i<n;++i){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
