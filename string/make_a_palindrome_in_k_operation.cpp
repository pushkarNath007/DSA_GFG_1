#include<bits/stdc++.h>
using namespace std;

string make_a_palindrome(int n,int k,string s){
    int i;
    int left;
   // cout<<n<<" ";
    if((n&1)==0){
         i=(n/2);
        left=i-1;
    } 
    else{
        i=(n/2)+1;
        left=(n/2)-1;
    }
    //cout<<i<<" "<<left;
    while(left>=0 &&i<=n-1){
        if(s[i]!=s[left]){
        s[i]=s[left];
        --k;
        }
        i++,left--;
    }
    if(k>=0) return "yes";
    return "No";
}
int main(){
    string s;
    int k,n;
    cin>>n>>s>>k;
    cout<<make_a_palindrome(n,k,s);
    return 0;
}
