#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,1,5};
    int subarrays=0;
    for(int i=0;i<4;++i){
        for(int j=i;j<4;++j){
            ++subarrays;
        }
    }
    cout<<subarrays<<endl;
    return 0;
}
