// 1-2+3-4+5+......................N terms
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long int sum =0;
    for(int i=1;i<=n;++i){
        if((i&1)==0){
            cout<<(i-(i*2))<<" ";
            sum+=(i-(i*2));
        }
        
        else {
            cout<<i<<" ";
            sum+=i;
        }

    }
    cout<<"="<<sum<<endl;
    return 0;
}
