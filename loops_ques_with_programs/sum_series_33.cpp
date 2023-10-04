// Write a C++ program to calculate the product of digits of a number.
#include<iostream>
using namespace std;
int main(){
    long int n,product=1;
    cin>>n;

    while(n!=0){
        product*=(n%10);
        n/=10;
    }
    cout<<endl<<product;
    return 0;
}