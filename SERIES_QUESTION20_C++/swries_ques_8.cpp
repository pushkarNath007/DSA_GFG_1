// 2!*4!*6!*8!*.........................N terms
#include<bits/stdc++.h>
using namespace std;
#define ld long long int

ld isfact(int n){
    ld pro=1;
    if(n==0||n==1||n==2) return n;
    for(int i=1;i<=n;++i){
        pro*=i;
    }
    return pro;
}
int main(){
    int n;
    cin>>n;
    ld fact,product=1;
    for(int i=2;i<=n;i+=2){
        fact=isfact(i);
        cout<<fact<<" *";
        product*=fact;
    }
    cout<<"="<<product<<endl;
    
    return 0;
}
