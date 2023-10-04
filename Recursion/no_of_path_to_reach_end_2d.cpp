#include<bits/stdc++.h>
using namespace std;

int no_of_paths(int n,int m){
    if(n==1 || m==1){
        return 1;
    }
    return no_of_paths(n-1,m)+no_of_paths(n,m-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<no_of_paths(n,m);
    return 0;
}
