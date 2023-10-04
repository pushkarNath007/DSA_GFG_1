/*) Write a C++ program to ﬁnd the sum of the ﬁrst and
last digit of a number.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    int last=n%10;
    n/=10;
    while(n>10){
        n/=10;
    }
    cout<<endl<<(last+=n);
    return 0;
}
