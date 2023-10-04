/*octal numbers are with base 8  like divide the digit with 8 and 
remainders are octal numbers and start with lastremainder*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll deci_to_octa(long int n){
    int i=1;
    int octal=0;
    while(n!=0){
        octal+=((n%8)*i);
        i*=10;
        n/=8;
    }
    return octal;
}

int main(){
    int t;
    long int n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<(deci_to_octa(n))<<endl;
    }
    return 0;
}
