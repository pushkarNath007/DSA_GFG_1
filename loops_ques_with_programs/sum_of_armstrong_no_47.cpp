/* Write a c++ program to print all the Armstrong
numbers between 1 to n.*/
#include<iostream>
#include<cmath>

bool isarmstrong(int n){
    int i=n,hell=0;
    while(n!=0){
        hell=(pow((n%10),3))+hell;
        n/=10;
    }
    if(hell==i){
        return true;
    }
    return false;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    long int sum=0;
    for(int i=1;i<=n;++i){
        if(isarmstrong(i)){
            sum+=i;
        }
    }
    cout<<sum<<endl;
}
