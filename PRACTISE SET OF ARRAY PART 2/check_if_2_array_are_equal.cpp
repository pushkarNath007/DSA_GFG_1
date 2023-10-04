#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    2 =1-1 =0
    4 =3-1 =2 -1 =1-1 =0
    5 =1
    1 =1
    */
   int n;
   cin>>n;
   vector<int >a(n);
   vector<int >b(n);
   for(int i=0;i<n;++i){
       cin>>a[i];
   }
   for(int i=0;i<n;++i){
       cin>>b[i];
   }
   unordered_map<int,int>ans;
    for(int i=0;i<a.size();++i){          //   2    0

        ++ans[a[i]];// ans[2]     // 2    1
    }
    for(int i=0;i<b.size();++i){
        if(ans.find(b[i])!=ans.end()){
            --ans[b[i]];
        }
        else{
            cout<<"not equal";  
             exit(0);
        }
     }
     for(auto it=ans.begin();it!=ans.end();++it){
         if((*it).second!=0) {
             cout<<"not equal";  
             exit(0);
         }
     }
     cout<<"equal"<<endl;
    return 0;
}
/*
    [first]
*/
