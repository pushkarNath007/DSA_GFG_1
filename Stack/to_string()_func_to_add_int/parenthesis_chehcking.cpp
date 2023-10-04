#include<bits/stdc++.h>
using namespace std;

bool compare(char a,char b){
    if(a=='}'){
        if(b=='{') return true;
        
    }
    else if(a==']'){
        if(b=='[') return true;
    }
    else if(a==')'){
        if(b=='(') return true;
    
    }
    return false;
}
bool parenthesis_chechking(string&ans){
    stack<char>res;
    for(int i=0;i<ans.length();++i){
        if(ans[i]=='{' ||ans[i]=='[' ||ans[i]=='('){
            res.push(ans[i]);
        }
        else{
            if(res.empty()) return false;
            if(compare(ans[i],res.top())) res.pop();
            else return false;
        }
    }
    if(res.empty()) return true;
    return false;
}
int main(){
    string ans;
    cin>>ans;
    if(parenthesis_chechking(ans)) cout<<"yes";
    else cout<<"No";
    return 0;
}
