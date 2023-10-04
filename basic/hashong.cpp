#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    map<int,int>ans;
    for(int i=0;i<4;++i) cin>>arr[i];
    for(int i=0;i<4;++i){
        ans[arr[i]]++;
    }
    //cout<<ans[a]<<endl;
    ans.erase(2);
    if(ans.find(3)!=ans.end()){
        cout<<ans[3]<<endl;
    }
    /*for( auto it=ans.begin();it!=ans.end();it++){
        cout<<it->first<<" "<<it->second<<" "<<endl;
    }*/
    
    return 0;
}
//   ans[arr[i]]++;
//   1  1
 //  3  1
 //  ans.end()
//    1 -> 0