#include<bits/stdc++.h>
using namespace std;
long int hexadeci(long int n){
    int hexa=0;
    int count=0;
    while(n!=0){
        hexa+=((n%10)*pow(16,count));
        count++;
        n/=16;
    }
    return hexa;
}


int main(){
    long long n;
    cin>>n;
    cout<<(hexadeci(n))<<endl;
    return 0;
}
