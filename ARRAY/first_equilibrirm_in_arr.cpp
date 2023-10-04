#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    if(n==1) cout<<-1;
    int left=0,right=n-1;
    int sum=0,sum1=0;
    while(left<=right){
        if(sum==0 &&sum1 ==0){//
            sum+=arr[left++];
            sum1+=arr[right--];// sum = 46// sum1 = 46  left 4  right =4
        }
        else if(sum==sum1){
            if(left==right){
                cout<<left<<endl;
                exit(0);
            }
            sum+=arr[left++];
            sum1+=arr[right--];
         }
        else if(sum>sum1) sum1+=arr[right--];
        else sum+=arr[left++];
    }
    cout<<"-1";
    return 0;
}

/*   { 2  , 3  , 6 , 4,2
 , 1}
       l    l          r    r

       sum= 5;
       if(sum ==0 && sum1 ==0) sum+=arr[left++];
       sum1+=arr[right--];
       sum1 = right =5;
       if (sum ==sum1){
           if Left ==right return left +1;
            sum+=arr[left++];
            sum1+=arr[right--];
       }

*/


