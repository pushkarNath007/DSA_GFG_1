#include<bits/stdc++.h>
using namespace std;

/*int fibo(int n,vector<int>&arr){
    if(arr[n]!=0) return arr[n];
    cout<<" hello  ->"<<n<<endl;
    if(n==1 || n==0) return n;
    
    int x=fibo(n-1,arr);
    int y=fibo(n-2,arr);
    int res=x+y;
    arr[n]=res;
    return res;
}*/
int fibo(int n,vector<int>&arr){
    
    if(arr[n]!=0) return arr[n];
    cout<<" value of "<<n<<endl;
    if(n==1 ||n==0) return n;
    
    int x=fibo(n-1,arr);
    arr[n-1]=x;
    int y=fibo(n-2,arr);
    arr[n-2]=y;
    int ans=x+y;
    arr[n]=ans;
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n+1);
    cout<<fibo(n,arr);
    return 0;
}
