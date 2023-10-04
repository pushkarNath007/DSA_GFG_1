#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    string ans=s1.substr(s1.length()-2,s1.length());
    ans.append(s1);
    ans.append(s1.substr(0,2));
    cout<<ans<<endl;
    if(ans.find(s2)!=string::npos){
        cout<<"Yes";
    }
    else cout<<" No";
    return 0;
}
