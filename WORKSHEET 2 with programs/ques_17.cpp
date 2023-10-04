/*
 Write a program to input three numbers and display them in
increasing order.

*/
#include<iostream>
#include<algorithm>
using namespace std;
#define maxi(a,b) max(a,b)
#define mini(a,b) min(a,b) 
int main(){
    int a,b,c, secmax;
    cin>>a>>b>>c;
    int maxim = maxi(a,(maxi(b,c)));
    int minim=mini(a,mini(b,c));
    if(maxim==a){
        secmax = mini(a,maxi(b,c));
    }
    else maxi(a,mini(b,c));

    cout<<minim<<" "<<secmax<<" "<<maxim<<endl;
    
     return 0;

}