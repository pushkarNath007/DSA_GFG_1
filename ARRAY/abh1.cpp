#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
    int n,m;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;++i){
        cin>>arr1[i];
    }
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;++i){
        cin>>arr2[i];
    }
    int ind=-1;
    for(int i=0;i<n;++i){
        if(arr1[i]==arr2[0]){
            ind=i;
            break;
        }
    }
    cout<<ind<<endl;
    string hind="yes";
    int k=0;
    for(int i=ind;i<=ind+m-1;++i){
        if(arr1[i]!=arr2[k]){
            hind="no";
            break;
        }
        else k++;
    }
   cout<<hind<<endl;
    return 0;
}