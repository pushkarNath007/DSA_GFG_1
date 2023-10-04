#include<bits/stdc++.h>
using namespace std;
unordered_map<string,unordered_map<string,int>>ans;
map<string,string> res;
void answer(string str,int n){
    unordered_map<string,unordered_map<string,int>>::iterator it;
    unordered_map<string,int>::iterator ptr;
    for(it=ans.begin();it!=ans.end();++it){
        if(str==it->first){
        for(ptr=it->second.begin();ptr!=it->second.end();++ptr){
            if(ptr->second>=n) res[it->first]=ptr->second;
        }
        }
    }
}
void insert(){
    string name,language;
    int n,m;
    cin>>name>>n;

    while(n--){
        cin>>language;
        cin>>m;
        ans[name][language]=m;
    }
}

void printing(){
    unordered_map<string,unordered_map<string,int>>::iterator it;
    unordered_map<string,int>::iterator ptr;
    for(it=ans.begin();it!=ans.end();++it){
        cout<<it->first<<endl;
        for(ptr=it->second.begin();ptr!=it->second.end();++ptr){
            cout<<ptr->first<<" "<<ptr->second;
        }
        cout<<endl;
    }
}
void contributor(int n){
    while(n--){
        insert();
    }
}
void chechking(){
    //unordered_map<string,int>check;
    string ab;
    int ac;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    while(d--){
        cin>>ab>>ac;
        //check[ab]=ac;
        answer(ab,ac);
    }
}
void projection(int m){
    while(m--){
         chechking();
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    contributor(n);
    projection(m);
    printing();
    return 0;
}
