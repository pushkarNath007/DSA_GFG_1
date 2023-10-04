#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0,temp=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
       
        sum=0;
        for(int j=i;j<n;++j){
             
            sum+=arr[j];
           cout<<sum<<endl;
        }
       temp+=sum;
    }
    cout<<"= "<<temp<<endl;
    return 0;
}
