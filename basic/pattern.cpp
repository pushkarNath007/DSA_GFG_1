/*
      1
    1 0 1
  1 0 0 0 1
1 0 0 0 0 0 1


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=(n-i);++j){
            cout<<"  ";
        }
        for(int j=1;j<=(n*2)-1;++j){
            if(j>=(n-i+1) && j<=(n+i-1)){
                if(j==(n-i+1) ||j==(n+i-1) &&j!=1) cout<<"1 ";
                else cout<<"0 ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}
