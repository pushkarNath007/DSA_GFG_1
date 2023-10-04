#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int val = 1;
    int vol=45;
    int value=64;
    int col=84;
    int hell =96,temp=63;
    int oops=58, ops=80,shl =83,end=94;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(i==1 || j==n) cout<<val++<<"  ";
           else if( i==2 && j<=n-1) cout<<((n*2)+((n-1)*2)+(j-1)-i)<<" ";
           else if(j<n&& i==n) cout<<((n*2)+((n-1)*2)-i-(j-1))<<" ";
           else if(j==1) cout<<((n*2)+((n-1)*2)-i)<<" ";
            else if(i>=3 && i<n && j==n-1) cout<<vol++<<" ";
            else if(i==3&& j>=2 && j<=n-2) cout<<value++<<" ";
            else if(j>=3 &&i==4 &&j<=7) cout<<col++<<" ";
            else if(i>=4 && i<=8 &&j==8) cout<<value++<<" ";
            else if(i>=5 &&i<=7 && j==7) cout<<col++<<" ";
            else if(i==5 && j>=4 && j<7) cout<<hell++<<" ";
            else if(i==5 and j==6) cout<<hell++<<" ";
            else if(i==n-1 && j>=2 &&j<=n-2) cout<<oops--<<" ";
            else if(i==n-2&& j>=3 && j<=n-3) cout<<ops--<<" ";
            else if(j==2 && i>=4&& i<=n-2) cout<<temp--<<" ";
            else if(j==3 && i>=5 && i<=7) cout<<shl--<<" ";
            else if(i==7 &&j>=4 && j<=6) cout<<end--<<" ";
            else if(i==6 && j==4) cout<<"95 ";
            else if(i==6 &&j==5) cout<<"100";
            else if(i==6 && j==6) cout<<"99 ";


       }
        cout<<endl;

    }
    return 0;
}
