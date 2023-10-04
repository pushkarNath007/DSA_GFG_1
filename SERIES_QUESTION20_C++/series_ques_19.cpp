// 2²*4²*6²*.......................................N terms
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int product=1;
    for(int i=2;i<=n;++i){
        if((i&1)==0){
            cout<<i<<"^"<<"2 *";
            product*=pow(i,2);
        }
        
    }
    cout<<"="<<product<<endl;
        return 0;
}