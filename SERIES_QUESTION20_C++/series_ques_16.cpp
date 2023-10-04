//⅛*4/12*7/16*..................................N terms
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long int sum,val=8;
    long double bb=1;
    for(int i=1;i<=n;i+=3){
        cout<<i<<"/"<<val<<"*";
        bb=((double)i/val)*bb;
        val+=4;
    }
    cout<<" ="<<bb<<endl;
    return 0;
}
