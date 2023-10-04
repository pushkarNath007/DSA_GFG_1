//2-4+6-8+...............................N terms
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,hell;
    for(int i=2;i<=n;i+=2){
        if(i>n) break;
        if(i%4==0){
            hell=i*-1;
            cout<<hell<<" ";
            sum+=hell;
        }
        else {
            cout<<i<<" ";
            sum+=i;
        }


    }
    cout<<"="<<sum;
    return 0;
}
