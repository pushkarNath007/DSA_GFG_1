#include<bits/stdc++.h>
using namespace std;

void printing(vector<int>arr,int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int max_area(int *arr,int n){
    stack<int>left,right;
    vector<int>leftarr,rightarr;
    for(int i=0;i<n;++i){
        while(!left.empty() && arr[left.top()]>=arr[i]) left.pop();
        if(left.empty()){
            leftarr.push_back(-1);
        }
        else leftarr.push_back(left.top());
        left.push(i);
    }
    for(int i=n-1;i>=0;--i){
        while(!right.empty() && arr[right.top()]>=arr[i]) right.pop();
        if(right.empty()){
            rightarr.push_back(n);
        }
        else rightarr.push_back(right.top());
        right.push(i);
    }
    reverse(rightarr.begin(),rightarr.end());
    int maxi=INT_MIN;
    int length=0;
    int total=0;
    for(int i=0;i<n;++i){
        length=(i-leftarr[i])+(rightarr[i]-i)-1;
        total=length*arr[i];
        maxi=max(maxi,total);
    }
    printing(leftarr,leftarr.size());
    printing(rightarr,rightarr.size());
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<max_area(arr,n);
    return 0;
}
