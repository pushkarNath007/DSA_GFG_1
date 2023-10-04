#include<bits/stdc++.h>
using namespace std;
int jumps(int *arr,int n){
    int flag=0;
    int jump=0,maxi=INT_MIN;
    for(int i=0;i<n;++i){
        maxi=max(maxi,i+arr[i]);//2//4//7
        if(maxi>=n-1 &&i<=flag){
            ++jump;
            return jump;
        }
        if(i==flag){
            flag=maxi;
            jump++;//1//2
        }
    }
    if(flag>=n-1) return jump;
    else return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<jumps(arr,n);
    return 0;
}
/*     flag = 0; 

        0  1  2   3  4 5 6 7
        2  3  1   4  2 3 5
        i     i   i    i
        i==0
        int maxi =3
        flag +=maxi;//2 +3

*/
/*
last =k // 3  (last -1 =2)   last+k
i+=k;

last >n
i n-1
*/
