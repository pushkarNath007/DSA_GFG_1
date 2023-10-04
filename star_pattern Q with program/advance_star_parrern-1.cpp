/*
        *         here j= i+(i-1);  for printing because in i add its previous value for column
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * *  
* * * * * * * * *   here i =n and column = i+(i-1)
  * * * * * * *   
    * * * * *     
      * * *       
        *       
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=(n-i);++j){
            cout<<"  ";
        }
        for(int j=1;j<=i+(i-1);++j){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;--i){
        for(int j=1;j<=(n-i);++j){
            cout<<"  ";
        }
        for(int j=1;j<=(i+(i-1));++j){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
