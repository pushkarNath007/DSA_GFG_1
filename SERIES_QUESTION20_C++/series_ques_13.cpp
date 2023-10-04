//0*1*1*2*3*5*8*.........................N terms
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int f=0;
    int s=1;
    long int fib;
    for(int i=1;i<=(n+1);++i){// here we started from 0th value so because we need to print from 1st value
        cout<<f<<" *";
        fib=f+s;
        f=s;
        s=fib;

    }
    return 0;
}
