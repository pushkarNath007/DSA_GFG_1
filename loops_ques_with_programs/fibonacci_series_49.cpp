//Write a C++ program to print the Fibonacci series up to n terms.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first=0,second=1,fibo;
    if(n==0||n==1){
        cout<<n<<endl;
    }
    for(int i=2;i<=n;++i){
        fibo=first+second;
        first=second;
        second=fibo;
    }
    cout<<endl<<fibo;
    return 0;
}