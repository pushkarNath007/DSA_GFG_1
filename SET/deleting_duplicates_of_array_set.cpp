#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    set<int>a;
    for(int i=0;i<n;++i){
        a.insert(arr[i]);
    }
    // if u dont know size and and all just give the value 
    for(auto x:a){
        cout<<x<<" ";
    }
    return 0;
}
