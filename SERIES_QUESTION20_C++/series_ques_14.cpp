// (1)*(1+2)*(1+2+3)*......................(1+2+3+........n)(N terms)
#include<bits/stdc++.h>
using namespace std;
#define ld  long long int

ld summer(int n){
    ld sum=0;
    for(int i=1;i<=n;++i){
        
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    ld pro=1;
    ld sum1;
    for(int i=1;i<=n;++i){
        sum1=summer(i);
        cout<<"("<<sum1<<")"<<" *";
        pro*=sum1;
    }
    cout<<" ="<<pro<<endl;
    return 0;
}
