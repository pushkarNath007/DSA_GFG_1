#include<bits/stdc++.h>
using namespace std;

void toh(int n,int from,int aux,int dest){
    if(n==1){
        cout<<" disk "<<n<<" from "<<from<<" to "<<dest<<endl;
        return ;
    }
    toh(n-1,from,dest,aux);
    cout<<" disk "<<n<<" from "<<from<<" to "<<dest<<endl;
    toh(n-1,aux,from,dest);
}
int main(){
    int n,from,to,aux;
    cin>>n>>from>>aux>>to;
    toh(n,from,aux,to);
    return 0;
}
