//Write a C++ program to calculate the sum of digits of anumber.
#include<iostream>
using namespace std;

int main(){
    long int n,sum=0;
    cin>>n;
    while(n!=0){
        sum=(n%10)+sum;
        n/=10;
    }
    cout<<sum<<endl;
    return 0;
}