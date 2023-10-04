//1²*3²*5²*7²*....................................N terms
#include<iostream>
#include<cmath>

int  main(){
    int n;
    std::cin>>n;
    long long int product=1;
    for(int i=1;i<=n;++i){
        if((i&1)!=0){
            std::cout<<i<<"^"<<2<<" *";
            product*=pow(i,2);
        }
    }
    std::cout<<" ="<<product<<std::endl;
    return 0;
}