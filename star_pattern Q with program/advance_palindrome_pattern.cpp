/*
        1          here we used three loop   first           
      2 1 2         we used i =1 and   gap =  n-i  = 5 -1 = 4 gap in first line
    3 2 1 2 3       now  j=1 and j<=i    to print descending order put int k= i and cout k--
  4 3 2 1 2 3 4     last loop for ascending order j=1 ; j<=(i-1) and put t=2 and cout<<t++;
5 4 3 2 1 2 3 4 5 
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
        int k=i;
        for(int j=1;j<=i;++j){
            
            cout<<k--<<" ";
        }
        int t=2;// outisde otherwise every iteration k will be equal to i ;
        for(int j=1;j<=i-1;++j){
            
            cout<<t++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
