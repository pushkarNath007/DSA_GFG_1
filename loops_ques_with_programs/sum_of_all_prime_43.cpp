// Write a C++ program to ﬁnd the sum of all primenumbers between 1 to n.
#include<iostream>

long int sum_of_prime(int n ){
    for(int i=2;i<n;++i){
        if(n%i==0){
            return 0;
        }
    }
    return n;
}
int main(){
    int n;
    std::cin>>n;

    long long int sum=0;
    for(int i=1;i<=n;++i){
        sum+=sum_of_prime(i);
    }
    std::cout<<std::endl<<sum;
    return 0;
}