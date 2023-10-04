#include<bits/stdc++.h>
using namespace std;

/*int righ(long long n){
    int count=0;
    while(n%10==0){
        ++count;
        n/=10;
    }
    return (count*5);
}*/
int zeroes(int n){
    int count=0;
    for(int i=5;i<=n;i*=5){
        count+=(n/i);
    }
    return count;
}
int fact(long long n){
    int right=n*5;
    int left=1;
    // 1                 10
    while(left<right){
        int mid=(left+right)/2;// 5
        int zero=zeroes(mid);
        if(zero<n) left=mid+1;
        else right=mid;
    }
    return right;
}
int main(){
    long long n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
