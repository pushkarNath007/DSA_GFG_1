#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    int buy;
    int hint=0;
    int flag=0;
    for(int i=1;i<=n;++i){
        if(arr[i]>arr[i-1] && flag == 0){
            buy =i-1;
            flag =1;
        }
        else if(flag ==1 && (arr[i]<arr[i-1]||i==n)){
            cout<<"("<<buy<<" "<<i-1<<") ";
            flag =0;
            hint =1;
        }
    }
    if(hint ==0) cout<<"No Profit"<<endl;
    else cout<<endl;
    return 0;
}
//sum = 17
/*2  3  4  5  6  9  12  7  3  4  5  
2 
2 3
2 3 4
2 3 4 5
2 3 4 5 6
3 
3 4 5 6
3 4
3 4 5
4 
4 5
4 5 6
*/
