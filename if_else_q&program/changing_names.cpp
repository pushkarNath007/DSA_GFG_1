#include<bits/stdc++.h>
using namespace std;

void encrypt(string&ans){
     for(int i=0;i<ans.length();++i){
         ans[i]+=19;
     }
}
void decrypt(string&ans){
    for(int i=0;i<ans.length();++i){
        ans[i]-=19;
    }
}
int main(){
    string ans;
    getline(cin,ans);
   
    //changing_names_in_descending(ans);
    encrypt(ans);
    cout<<ans<<endl;
    decrypt(ans);
    cout<<ans<<endl;
    return 0;
}
