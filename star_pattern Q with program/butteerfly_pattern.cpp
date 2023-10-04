/*
*                 *  here when j<=i and j> (n*2)-i print star  or  double gap "  "
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * *  here i=(n-1) and j<=i and j>(n*2)-i
* * *         * * * 
* *             * * 
*                 * 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=(n*2);++j){
            if(j<=i) cout<<"* ";
            else if(j>(n*2)-i) cout<<"* ";
            
            else cout<<"  ";
        }
        
        cout<<endl;
    }
    for(int i=(n-1);i>=1;--i){
        for(int j=1;j<=(n*2);++j){
            if((j<=i) || j>((n*2)-i)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
