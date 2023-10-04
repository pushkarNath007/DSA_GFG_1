#include<bits/stdc++.h>
using namespace std;
#define MAX 30
int max_histogram(int *arr,int n){
    stack<int>left,right;
    vector<int>leftarr(n),rightarr(n);
    for(int i=0;i<n;++i){
        while(!left.empty() &&arr[left.top()]>=arr[i]) left.pop();
        if(left.empty()){
            leftarr[i]=-1;
        }
        else leftarr[i]=left.top();
        left.push(i);
    }
    for(int i=n-1;i>=0;--i){
        while(!right.empty() && arr[right.top()]>=arr[i]) right.pop();
        if(right.empty()) rightarr[i]=n;
        else rightarr[i]=right.top();
        right.push(i);
    }
    int maxi=INT_MIN,length=0;
    for(int i=0;i<n;++i){
        length=(i-leftarr[i])+(rightarr[i]-i)-1;
        maxi=max(maxi,length*arr[i]);
    }
    return maxi;
}
void printing(int arr[][MAX],int r,int c){
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int max_sized(int arr[][MAX],int r,int c){
    int row=0,maxi=INT_MIN,current;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;++j){
            if(i!=0 && arr[i][j]!=0) arr[i][j]+=arr[i-1][j];
        }
        current=max_histogram(arr[row++],c);
        maxi=max(maxi,current);
    }
    //printing(arr,r,c);
    return maxi;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][MAX];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    cout<<max_sized(arr,n,m);
    return 0;
}
