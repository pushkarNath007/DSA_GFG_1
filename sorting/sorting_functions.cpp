/*#include<bits/stdc++.h>
using namespace std;

// 10 20 30 4 50 6 7 

void decode()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    sort(array, array+n);
    for(auto x : array){
        cout << x << " ";
    }
    cout<< "\n\n";
    sort(array, array+n, greater<int>());
    for(auto x : array){
        cout << x << " ";
    }
    cout<< "\n\n";
    // time complexity O(nlogn)
}

int32_t main()
{
    decode();
    return 0;
}
*/