#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    stack<char>ans;
    string rishab;
    int k;
    cin>>rishab>>k;
    
    for(int i=rishab.length()-1;i>=k;--i) ans.push(rishab[i]);
    for(int i=0;i<k;++i){
        ans.push(rishab[i]);
    }
    while(ans.empty()!=true){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    return 0;
}
// 1 2 3 4 5
//k =3 '
// 3 2 1 4 5
// 