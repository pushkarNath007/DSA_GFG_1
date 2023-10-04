// 1 3 7 15 31 63 127 ..........................N terms
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int val=2;
    for(int i=1;i<=n;){

        cout<<i<<" ";
        i+=val;
        val*=2;
    }
    return 0;
}
