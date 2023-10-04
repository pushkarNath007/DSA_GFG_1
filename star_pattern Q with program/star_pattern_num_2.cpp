/*  1
   2 2 
  3   3 
 4     4 
5       5
 4     4 
  3   3 
   2 2 
    1
    */
   #include<bits/stdc++.h>
   using namespace std;
   
   int main(){
       int n;
       cin>>n;
       for(int i=1;i<=n;++i){
           for(int j=1;j<=n-i;++j){
               cout<<" ";
           }
           for(int j=1;j<=i;++j){
               if(j==1||j==i) cout<<i<<" ";
               else cout<<"  ";
           }
           cout<<endl;
       }
       for(int i=(n-1);i>=1;--i){
           for(int j=1;j<=(n-i);++j){
               cout<<" ";
           }
           for(int j=1;j<=i;++j){
               if(j==1||j==i) cout<<i<<" ";
               else cout<<"  ";
         }
         cout<<endl;
       }
       return 0;
   }
   