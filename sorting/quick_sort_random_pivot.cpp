#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int hoare_Partition(int array[], int start, int end){
    int pivot = array[start];
    int i = start-1;
    int j = end+1;
    while(true){
        do{
            i++;
        }while(array[i] < pivot);
        do{
            j--;
        }while(array[j] > pivot);
        if(i>=j){
            return j;
        }
        swap(array[i], array[j]);
    }
}

void quickSort(int array[], int start, int end){
    if(start < end){
        int p = hoare_Partition(array, start, end);
        quickSort(array, start, p);
        quickSort(array, p+1, end);
    }
}

void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    quickSort(array, 0, n-1);
    for(auto it : array){
        cout << it << " ";
    }
}

int32_t main()
{
    decode();
    return 0;
}*/
//10 5 25 12 15
