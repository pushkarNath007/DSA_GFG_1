#include<bits/stdc++.h>
using namespace std;

int sliding_3(vector<int>arr,int k){
    int sum=0,maxsum=0;
    for(int i=0;i<k;++i){
        sum+=arr[i];
    }
    maxsum=sum;
    for(int i=k;i<arr.size();++i){
        sum+=arr[i];//10// 12
        sum-=arr[i-k];//sum=sum-arr[1]
        maxsum=max(sum,maxsum);
    }
    return maxsum;
}
int sliding_2(vector<int>&arr,int k){
    int j=0,sum=0,maxsum=0;
    for(int i=0;i<arr.size();++i){
        sum+=arr[i];// sum= sum+arr[i]=3
        if(i>=k){
            sum-=arr[j++];
        }
        maxsum=max(sum,maxsum);
    }
    return maxsum;
}
int sliding_1(vector<int>arr,int k){
    int n=arr.size();    // k =3
    int count=0,sum=0,maxsum=0;
    int j=0;//1//2
    for(int i=0;i<n;++i){
        sum+=arr[i];// 3 // 8 //10 //14//11 //12
        count++;// 1 //2 //3 //4
        if(count>k){// k=3  count =4
            sum=sum-arr[j++];// 14- arr[0]=11, 12-arr[1]=7
            --count;//3
        }
        maxsum=max(maxsum,sum);//3//8 // 10//11
    }
    return maxsum;
}
int main(){
    // int arr[n];
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<sliding_3(arr,k)<<" "<<endl;
    return 0;
}
