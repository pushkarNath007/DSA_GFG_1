/*
#include <bits/stdc++.h>
using namespace std;

int rcp(int n, int a, int b, int c){
    if(n <= -1){
        return -1;
    }
    if(n==0){
        return 0;
    }
    // max(a, max(b, c));
    int ans = max(rcp(n-a, a, b, c), max(rcp(n-b, a, b, c), rcp(n-c, a, b, c)));
    if(ans == -1){
        return -1;
    }
    return ans+1;
}
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    cout << rcp(n, a, b, c) << endl;
    return 0;
}
*/