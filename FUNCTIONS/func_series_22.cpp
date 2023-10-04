/*
 Write a C++ program to print all alphabets from a to z.
- using while loop

*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    char bc ='a';
    while(bc<='z'){
        cout<<bc<<" ";
        ++bc;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
