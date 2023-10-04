
#include<bits/stdc++.h>
using namespace std;

int main(){
    string abhiraj;
   
    while(abhiraj=="") {
        cout<<"Enter the plain text"<<endl;
         getline(cin,abhiraj);
    }
    
    unordered_map<char,char>key;
    char bl;
    cout<<"Enter the key"<<endl;
    for(char i='a';i<='z';++i){
        cout<<i<<" ";
        cin>>bl;
        key[i]=bl;
        key[(i-32)]=bl;
    }
    for(int i=0;i<abhiraj.length();++i){
        if(key.find(abhiraj[i])!=key.end()){
            abhiraj[i]=key[abhiraj[i]];
        }
    }
    cout<<"cipher test ="<<abhiraj;
    return 0;
}
