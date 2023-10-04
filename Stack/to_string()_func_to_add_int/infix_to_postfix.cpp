#include<bits/stdc++.h>
using namespace std;

int precedency(char b,char c){
    if(c=='(') return 2;
    if(b=='*' ||'/'){
        if(c=='+'||c=='-') return 2;
       
    }
    return 1;
   
}
void infix_to_postfix(string &s){
    stack<char>ans;
   for(int i=0;i<s.length();){
       if(isalpha(s[i]!=0)) cout<<s[i++]<<" ";
     
   }
   while(ans.empty()!=true){
       cout<<ans.top()<<" ";
       ans.pop();
   }
}
int main(){
    string s;
    cin>>s;
    infix_to_postfix(s);
    return 0;
}
