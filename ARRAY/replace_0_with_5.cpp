#include<bits/stdc++.h>
using namespace std;


int  replacing(int n){
    int ans=0;
    int i=1;
    int last;
   while(n!=0){
       last=n%10;
        if(last==0) last =5;
        ans=(last*i)+ans;
        i*=10;
        n/=10;
   }
   return ans;
}
int main(){
    int n;
    cin>>n;
    cout <<replacing(n)<<endl;
    return 0;
}
