#include<bits/stdc++.h>
using namespace std;

void printing(long int notes,int money){
    cout<<money<<" ="<<(notes/money)<<endl;
}
void solve(){
    long int notes,money;
    cin>>notes>>money;
    switch(money){
        case 2000:
            printing(notes,2000);
            notes%=2000;
        case 1000:
            printing(notes,1000);
            notes%=1000;
        case 500:
            printing(notes,500);
            notes%=500;
        case 200:
            printing(notes,200);
            notes%=200;
        case 100:
            printing(notes,100);
            notes%=100;
        case 50:
            printing(notes,50);
            notes%=50;
        case 20:
            printing(notes,20);
            notes%=20;
        case 10:
            printing(notes,10);
            notes%=10;
        case 5:
            printing(notes,5);
            notes%=5;
        case 2:
            printing(notes,2);
            notes%=2;
        case 1:
            printing(notes,1);
            notes%=1;

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
