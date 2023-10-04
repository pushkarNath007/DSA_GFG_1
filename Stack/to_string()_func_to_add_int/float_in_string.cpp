#include<bits/stdc++.h>
using namespace std;
//using std::to_string;
string reverse(int *arr,int k,int n){
    stack<char>s1;
    string ans="";
    for(int i=n-1;i>=k;i--){
          s1.push(arr[i]);
    }
    for(int i=0;i<k;++i) s1.push(arr[i]);
    while(s1.empty()!=true){
       ans+=::to_string(s1.top());
       s1.pop();
    }
    return ans;
}
int main()
{   int n,k;
    cin >> n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    string ans=reverse(arr,k,n);
    cout<<ans;
    
    return 0;
}
