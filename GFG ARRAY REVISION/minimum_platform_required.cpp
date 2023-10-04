#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],dep[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        cin>>dep[i];
    }
    int platform=0;
    int maximum_platform=1;
    for(int i=0,j=0;i<n &&j<n;){
        if(arr[i]<=dep[j]){
            ++platform;
              ++i;
        }
        else{
            --platform,++j;
        }
         maximum_platform=max(maximum_platform,platform);
    }
    cout<<maximum_platform<<endl;
    return 0;
}
