/*Write a C++ program to check whether a number is an
Armstrong number or not.*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n;
    long int sum=0;
    while(n!=0){
        sum=(pow((n%10),3))+sum;
        n/=10;
    }
    cout<<endl<<((sum==i)? "armstrong number":"not a armstrong number");
    return 0;
}
