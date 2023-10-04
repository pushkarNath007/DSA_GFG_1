#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int i=1;
    for(int j=1; i<n &&j<n;){
        if(arr[i]!=arr[i-1] &&arr[i]>arr[i-1]){
            ++i;
            ++j;
        } 
        else if(arr[j]<=arr[i]) ++j;
        else swap(arr[i],arr[j]);
    }
    for(int j=0;j<i;++j){
        cout<<arr[j]<<" ";
    }
    return 0;
}
/*     i    j j
    2  2  2 3 4 4 5 5
    res =1;  arr[res]=arr[i]  2  3
    2  3  2  2  4 
    2  3  4  2  4  5  5 
 */
/*   j      j
   2  2  2  3  4  4  5  5
     i
               j
   2  3  2  2  4  4  4  4
      i  i

                     j
   2  3  4  2  2  4  4  4
            i  i
   2  3  4  5  2  4  2  5


     2   3   
  16  17  4  3  1  2
*/