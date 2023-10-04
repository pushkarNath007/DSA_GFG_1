#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int sum=-1;
    for(int i=0;i<n;++i){
        if(arr[i]>=0){
            if(sum==-1) sum=arr[i];
            else if(arr[i]-sum!=1){
                cout<<(arr[i]-sum)<<endl;
                break;
            }
            else sum=arr[i];
        }
    }
    return 0;
}
