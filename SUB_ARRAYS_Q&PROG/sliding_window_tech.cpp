#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0,check=0;
    for(int i=0,j=0;i<n&& i<=j;){
        if(sum<k){
            sum+=arr[j++];
        }
        else if(sum==k){
            check=1;
            cout<<"YES"<<" ";
            exit(0);
        }
        else if(sum>k){
            sum-=arr[i++];
        }
    }
    if(check==0)  cout<< "No"<<endl;
    
    return 0;
}// we've given an unsorted array of non-negative integers, our task is to find whether there is a subarray with the given sum k is present or not.
/*bool slidingwindow(int array[], int n, int k){
    int sum = array[0];
    int start = 0;
    for(int i = 1; i < n; i++){
        while(sum > k && start < i-1){
            sum -= array[start];
            start++;
        }
        if(sum == k){
            return true;
        }
        if(i < n){
            sum += array[i];
        }
    }

}
*/
