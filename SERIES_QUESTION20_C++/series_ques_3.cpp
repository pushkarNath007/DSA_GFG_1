// 2*4*6*8*10*....................N terms
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        if((i&1)==0) cout<<i<<" *";
    }
    return 0;

}