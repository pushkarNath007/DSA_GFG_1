#include<bits/stdc++.h>
using namespace std;
void printing(int n,int k){ //1 k =3
    if(n==1){
        for(int i=1;i<=k;++i){  // k=1, 2  3
            if(i<k) cout<<" "; // n =3, 2,1
            else cout<<"* ";
        }
          
        return ;
    }
   
    for(int i=1;i<=n;++i){
        if(i<k) cout<<" ";
        cout<<"* ";
    }
  
    cout<<endl;
     
    printing(n-1,k+1);   
   
    cout<<endl;        // 2 
    for(int i=1;i<=n;++i){
        if(i<k) cout<<" ";
        cout<<"* ";
    }
   
}
int main(){
    int n;
    cin>>n;
    printing(n,1);
    return 0;
}
