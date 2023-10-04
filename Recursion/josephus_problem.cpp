#include<bits/stdc++.h>
using namespace std;

int jos(int n,int k){
    if(n==1) return 0;
    int x=jos(n-1,k);
    int y=(x+k)%n;
    return y;
}
int josephus(int n,int k){
    return jos(n,k)+1;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<josephus(n,k);
    return 0;
}
