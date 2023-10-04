 //Write a C++ program to print the Fibonacci series up between two intervals.
#include<bits/stdc++.h>
using namespace std; 


int main(){
    int b;
    cin>>b;
    int f=0,s=1,pro;
    if(b==1||b==0) cout<<endl<<b;
    for(int i=2;i<=b;++i){
        pro=f+s;
        f=s;
        s=pro;
    }
    cout<<pro;

    return 0;
}
