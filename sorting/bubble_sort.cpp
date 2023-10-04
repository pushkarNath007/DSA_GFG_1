/*#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int array[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}

void decode()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    bubble_sort(array, n);
    for(auto it : array){
        cout << it << " ";
    }
}

int32_t main()
{
    decode();
    return 0;
}*/