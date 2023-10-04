// 1*3*7*15*31*63*127*……………………..N terms
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int product=1,temp=1;   
     for(int i=1;i<=n;){
        cout<<i<<" *";
        product*=i;
        i+=(temp*2);
        temp*=2;

    }
    cout<<" ="<<product<<endl;
    return 0;
}