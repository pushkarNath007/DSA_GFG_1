#include<bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int n){
    for(int i = 1; i < n; i++){
        int key = array[i];
        int j = i-1;
        while(array[j] > key && j >= 0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
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
    insertionSort(array, n);
    for(auto it : array){
        cout << it << " ";
    }
}

int32_t main()
{
    decode();
    return 0;
}