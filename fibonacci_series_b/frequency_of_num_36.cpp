#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int last,sec;
    long long int div=10;
    int count;
    while(n!=0){
        div=10,count=0;
        last =n%div;
        while((n%div)>10){
            sec=div*=10;
           if(last==sec) ++count;
        }
        sec=(n%div);
        if(sec==last){
            ++count;
        }
        
        n/=10;
        
    }
    return 0;
}
