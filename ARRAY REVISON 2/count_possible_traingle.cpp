
/* when any two sides plus is greater the third side its a trinagle

    in three values one value has to be bgreater than other two then 
    we can assume if two smallest values sum is greater than  the bigger vaalue then
    if we add that bigger value with any smallest side it will naturallly be greater than the other ones too
    so here what we can do is 
    we can fix the biggger value and we can the  other two and rpeat the process
     so to fix the bigger value 
     how will we know that its a bigfger value
     that is if we sort the array

*/
//  1 2 3 4 5 6 7 8 9 12 15
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    sort(arr,arr+n);
    int count =0;
    for(int i=n-1;i>=2;--i){
        int right=i-1;
        int left=0;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum>arr[i]){
                count+=right-left;
                --right;
            }
            else{
                ++left;
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}
/*
 a + b >c
 b + c >a 
 c + a >b


*/
