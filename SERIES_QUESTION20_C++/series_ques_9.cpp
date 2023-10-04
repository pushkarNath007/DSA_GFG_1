// x*x²*x³*x⁴*............................xⁿ (N terms)
#include<bits/stdc++.h>
using namespace std;
#define ld long long int
int main(){
   int n,base;
   cin>>n>>base;
   ld product=1;

   for(int i=1;i<=n;++i){
       
       if(i==n){
           cout<<base<<"^"<<i;
           product*=(pow(base,i));
       }
       else{
           cout<<base<<"^"<<i<<"*";
    product*=(pow(base,i));
       }
   }
   cout<<"="<<product;
    return 0;
}
