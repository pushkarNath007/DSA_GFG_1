#include<bits/stdc++.h>
using namespace std;

bool ischeck(vector<int>a,int val){
    if((binary_search(a.begin(),a.end(),val))) return true;
    return false;
}
int main(){
    vector<int>a;
    int j;
    int check=1;
    for(int i=1988;i<=5000;++i){
        j=0;
        while(i!=0){
        int last=i%10;
       
        if(ischeck(a,last)){
            check=0;
            break;
        }
        a[j++]=last;
        i/=10;
        }
        if(check) cout<<i<<" ";
    }
    
        return 0;
}
