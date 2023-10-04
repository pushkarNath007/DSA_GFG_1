#include<bits/stdc++.h>
using namespace std;

int sqrt_with_binary_search(int n){
    if(n<2) return n;
    int left=1,right=n/2;
    while(left<=right){
        int mid=(left +(right-left)/2);
        int pow=mid*mid;
        if(pow<=n && (mid+1)*(mid+1)>n) return mid;
        else if(pow>n) right=mid-1;
        else left=mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    cout<<sqrt_with_binary_search(n);
    return 0;
}

/*     9
    1  2  3  4  5  6  7  8   16  i+1 *i+1

*/
