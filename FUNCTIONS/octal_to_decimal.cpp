#include<bits/stdc++.h>
using namespace std;

int octa_to_deci(int n){
    int sum=0;
    int digitno=0;
    while(n!=0){
        sum+=((n%10)*pow(8,digitno));
        digitno++;
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(octa_to_deci(n))<<endl;
    }
    return 0;
}
