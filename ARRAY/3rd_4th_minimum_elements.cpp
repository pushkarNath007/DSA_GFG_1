#include <bits/stdc++.h>
using namespace std;

int smallest(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}
int sec_smallest(int arr[], int n, int val)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == val)
            continue;
        mini = min(mini, arr[i]);
    }
    return mini;
}
int third_smallest(int arr[], int n, int first, int second)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == first || arr[i] == second)
            continue;
        mini = min(mini, arr[i]);
    }
    return mini;
}
int fourth_smallest(int arr[], int n, int first, int second, int third)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == first || arr[i] == second || arr[i] == third)
            continue;
        mini = min(mini, arr[i]);
    }
    return mini;
}
int fifth_smallest(int arr[], int n, int first, int second, int third, int fourth)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == first || arr[i] == second || arr[i] == third || arr[i] == fourth)
            continue;
        mini = min(mini, arr[i]);
    }
    return mini;
}
int sixth_smallest(int arr[], int n, int first, int second, int third, int fourth, int fifth)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == first || arr[i] == second || arr[i] == third || arr[i] == fourth || arr[i] == fifth)
            continue;
        mini = min(mini, arr[i]);
    }
    return mini;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int first;
    first = smallest(arr, n);
    int second = sec_smallest(arr, n, first);
    int third = third_smallest(arr, n, first, second);
    int fourth = fourth_smallest(arr, n, first, second, third);
    int fifth = fifth_smallest(arr, n, first, second, third, fourth);
    int sixth = sixth_smallest(arr, n, first, second, third, fourth, fifth);
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == first || arr[i] == second || arr[i] == third || arr[i] == fifth || arr[i] == sixth || arr[i] == fourth)
        {
            continue;
        }
        mini = min(mini, arr[i]);
    }
    cout << mini << endl;
    return 0;
}

// here we used
/*
your task is to find 
1st largest
2nd largest
3rd largest
4th largest
5th largest
6th largest
7th largest

1st smallest
2nd smallest
3rd smallest
4th smallest
5th smallest
6th smallest
7th smallest

take array size 20 in this question.
*/