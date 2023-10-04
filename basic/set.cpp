#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>ans;
    ans.insert(7);
    ans.insert(6);
    ans.insert(3);
    ans.insert(1);
    if(ans.find(7)!=ans.end()){
        ans.erase(7);
        ans.clear();

    }
    for(auto it=ans.begin();it!=ans.end();++it){
        cout<<*it<<endl;
    }
  /*  
    6 
    1
    3
   ans.end()
             vector<int>ans(n,-1)
    */
    return 0;
}
