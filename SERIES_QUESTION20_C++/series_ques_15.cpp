// ½*⅔*¾*⅘*....................................N terms
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long double pro=1;
    for(int i=1;i<=n;++i){
        cout<<i<<"/"<<i+1<<" *";
        pro=((double)i/(i+1))*pro;
    }
    cout<<" ="<<pro<<endl;
    return 0;
}
