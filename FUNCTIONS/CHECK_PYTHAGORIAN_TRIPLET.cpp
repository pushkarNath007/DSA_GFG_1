#include<bits/stdc++.h>

using namespace std;
bool is_triplet(int a,int b,int c){
    if(pow(c,2)==(pow(a,2)+pow(b,2))) return true;
    else return false;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(is_triplet(a,b,c)) cout<<"Pythagorian triangle "<<endl;
    else cout<<" not a pythagorian triangle";
    return 0;
}