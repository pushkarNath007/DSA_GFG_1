#include<bits/stdc++.h>
using namespace std;

void linear_search(int n,int size,int *arr){
    for(int i=0;i<size;++i){
        if(n==arr[i]) {
            cout<<n<<" "<<"is found at"<<i<<"th"<<" "<<"index"<<endl;
            return ;
        }
    }
     cout<<"value hasnt found "<<endl;
}
void binary_search(int n,int size,int *arr){
    int left=0;
    int right =size -1;
    int mid;
    while(left<right){
        mid=(left+right)/2;
        if(n==arr[left]){
            cout<<n<<" "<<"is found at"<<left<<"th"<<" "<<"index"<<endl;
            return ;
        }
        else if(n==arr[right]){
            cout<<n<<" "<<"is found at"<<right<<"th"<<" "<<"index"<<endl;
            return ;
        }
        else if(n==arr[mid]){
            cout<<n<<" "<<"is found at"<<mid<<"th"<<" "<<"index"<<endl;
            return ;
        }
        else {
            if(n>arr[mid]) left=mid+1;
            else right=mid-1;
        }
    }
    cout<<"value hasnt found "<<endl;
}

void solve(){
    int arr[6]={2,3,4,5,6,6};
    int size= sizeof(arr)/sizeof(int);
    int n,t;
    cin>>n;
    cout<<" select 1 for  binary search and 2 for linear search\n";
    cin>>t;
    if(t==1) binary_search(n,size,arr);
    else if(t==2)  linear_search(n,size,arr);
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
