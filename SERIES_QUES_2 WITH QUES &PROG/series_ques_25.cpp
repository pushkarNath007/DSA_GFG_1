//1 + x + x^2+ x^3+ x^4+ .....................x^n
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    long int sum=0;
    for(int i=0;i<=n;++i){
        sum+=(pow(x,i));
        cout<<(pow(x,i))<<" + ";    
    }
    cout<<"="<<sum;
    return 0;
}
