/* if two prime numbers multiplication is equal 
to the num then those two are its prime number*/
#include<iostream>
using namespace std;
bool is_prime(int n){
    for(int i=2;i<n;++i){
        if(n%i==0)
            return false;
    }
    return true;
   

}

int main(){
    int n,sum=0,quotient;
    cin>>n;
    
    for(int i=1;i<=(n/2);++i){
        if(is_prime(i)){
            if(n%i==0){
                quotient=(n/i);
                if(is_prime(quotient)){
                    cout<<i<<" *"<<quotient<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}