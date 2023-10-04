#include<bits/stdc++.h>
using namespace std;

int bin_todeci(long int n ){
    int sum=0,digit=-1;
    while(n!=0){
        if(n%10==0)++digit;
        else {
            ++digit;
            sum+=pow(2,digit);
        }
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    long int n;
    cin>>t;
    while(t--){// it will gonna for t= 0 bacause   0 = false 
        cout<<" Enter the binary numbers\n";
        cin>>n;
        cout<< (bin_todeci(n))<<endl;
    }
    return 0;
}