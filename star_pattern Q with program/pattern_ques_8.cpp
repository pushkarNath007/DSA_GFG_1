/*
    *     
   * *    
  * * *   
 * * * *  
* * * * * 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=(n-i);++j){// 5-1 = 4 gap  then 5-2=3 gap
            cout<<" ";
        }
        for(int j=1;j<=i;++j){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
