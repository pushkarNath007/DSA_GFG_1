//1!*3!*5!*7!*........................N terms
#include<bits/stdc++.h>
using namespace std;
#define ld long long int

ld isfactorial(int n){
    ld fact=1;
    if(n==1||n==0 ||n==2) return n;
    for(int i=1;i<=n;++i){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    ld product=1,fact;
    for(int i=1;i<=n;++i){
        if((i&1)!=0){
            fact=isfactorial(i);
            cout<<fact<<" *";
            product*=fact;
        }
    }
    cout<<"="<<product<<endl;
    return 0;
}