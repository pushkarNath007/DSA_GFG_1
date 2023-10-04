//Dynamic array (Vector-STL)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    vector<int> v1;
    for (int i = 0; i < 8; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    // 1 2 3 9 8 7 4 5
    sort(v1.begin(), v1.end());
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << "\n\n\n";

    sort(v1.begin(), v1.end(), greater<int>());
    for(auto it : v1){
        cout << it << " ";
    }

    cout << "\n\n\n";
    return 0;
}