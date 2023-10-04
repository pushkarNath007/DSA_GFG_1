// x*x³*x⁵*x⁷*............................x⁽ⁿ⁺²⁾ (N terms)
#include<iostream>
#include<cmath>

int main(){
    int n,base;
    std::cin>>n>>base;
    long  long int pro=1;
    for(int i=1;i<=n;i+=2){
        std::cout<<base<<"^"<<i<<" *";
        pro=(pow(base,i))*pro;
    }
    std::cout<<"="<<pro;
    return 0;
}