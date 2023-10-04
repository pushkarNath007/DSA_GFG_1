#include<bits/stdc++.h>
using namespace std;

int main(){
    string abhiraj;
    int key;
    while(abhiraj==""){
    cout<<"Enter the plain text"<<endl;
    getline(cin,abhiraj);
    }
    cout<<endl<<"Enter the key"<<endl;
    cin>>key;
    
    for(int i=0;i<abhiraj.length();++i){
        if(abhiraj[i]>=65 &&abhiraj[i]<=90){
            if(abhiraj[i]+key>90){
                abhiraj[i]=65+((abhiraj[i]+key)-90)-1;
            }
            else abhiraj[i]=abhiraj[i]+key;
        }
        else if(abhiraj[i]>=97 &&abhiraj[i]<=122){
            if(abhiraj[i]+key>122){
                abhiraj[i]=97+((abhiraj[i]+key)-122)-1;
            }
            else abhiraj[i]=abhiraj[i]+key;
        }
    }
    cout<<endl<<"Cipher test ="<<abhiraj;
    return 0;
}
