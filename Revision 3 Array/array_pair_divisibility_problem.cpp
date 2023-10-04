#include<bits/stdc++.h>
using namespace std;


void mpp(unordered_map<int,int>ans){
    for(auto it=ans.begin();it!=ans.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
bool canPair(vector<int> arr, int k) {
        
        int n=arr.size();
        if(n%2!=0) return false;
        unordered_map<int,int>ans;
        for(int i=0;i<n;++i){
           ans[arr[i]%k]++;
        }
        mpp(ans);
    
        for(int i=0;i<n;++i){
           
            cout<<arr[i]%k<<endl;

            cout<<"k -"<<arr[i]%k<<"="<<(k-arr[i]%k)<<endl;
            if(ans.find(2)==ans.end()){
                cout<<"Not Here"<<endl;
            }
            if(arr[i]%k==0){
                cout<<" first -1 "<<" ";
               if((ans[arr[i]%k]&1)!=0) return false;
            }
            else if((arr[i]%k)*2==k){
                cout<<"second- 2 "<<" ";
                if((ans[arr[i]%k]&1)!=0) return false;
            }
            else if(ans.find(k-(arr[i]%k))==ans.end()){
                cout<<"third- 3 "<<" ";
                 return false;
            }
            
            
        }
        return true;
    }
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<canPair(arr,k);
    return 0;
}
