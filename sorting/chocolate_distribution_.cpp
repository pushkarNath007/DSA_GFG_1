#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int chocolate_distributionPrblm(int array[], int n, int m){
    if(m>n){
        return -1;
    }
    sort(array, array+n);
    int ans = (array[m-1] - array[0]);
    for(int i = 1; (i+m-1) < n; i++){
        ans = min(ans, (array[i+m-1] - array[i]));
    }
    return ans;
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
    int m;
    cin >> m;
    cout << chocolate_distributionPrblm(array, n, m);
}

int32_t main()
{
    decode();
    return 0;
}
/*
/* 
1 2 4 
4 5 6
7 8 9
*/
/*
//Print matrix in snake pattern
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)



void decode()
{
    speedy;
    int n, m;
    cin >> n >> m;
    int array[n][m];
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < m; j++)
            cin >> array[i][j];
    }

    for(int i = 0; i < n; i++){
        if(i%2==0){
            for(int j = 0; j < m; j++){
                cout << array[i][j] << " "; 
            }
        }
        else
        {
            for(int j = m-1; j>= 0; j--){
                cout << array[i][j] << " ";
            }
        }
    }
    
}

int32_t main()
{
    decode();
    return 0;
}*/
/*
//sum of upper and lower traingles

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)



void decode()
{
    speedy;
    int n, m;
    cin >> n >> m;
    int array[n][m];
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < m; j++)
            cin >> array[i][j];
    }
    int lowertri = 0, uppertri = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i<=j){
                uppertri += array[i][j];
            }
            if(i>=j){
                lowertri += array[i][j];
            }
        }
    }
    cout << lowertri << " " << uppertri << endl;
}

int32_t main()
{
    decode();
    return 0;
}
*/