#include<bits/stdc++.h>
using namespace std;
void reverse_first_k(queue<int>&q,int k){
    stack<int>s;
    for(int i=0;i<k;++i){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()!=true){
        cout<<s.top()<<" ";
        s.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue<int>q;
    int n;
    cin>>n;
    int k;
    for(int i=0;i<n;++i){
        cin>>k;
        q.push(k);
    }
    cin>>k;
    reverse_first_k(q,k);
    return 0;
}
