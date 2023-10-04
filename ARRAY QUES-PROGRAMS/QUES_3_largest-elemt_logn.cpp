#include <bits/stdc++.h>
using namespace std;

int largest_index(int arr[], int n, int val)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (arr[left++] == val)
            return --left;
        if (arr[right--] == val)
            return ++right; // because in memory right got reduced by right--
    }
    return -1;
}

void largest_element(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int maxi =INT_MIN,maxi1 = INT_MIN;
    while (left <=right)
    {
        if (left == right)
        {
            maxi = max(maxi, arr[left]);
        }
        else
        {
            maxi = max(maxi, arr[left++]);
            maxi1 = max(maxi, arr[right--]); //
        }
    }
    maxi = max(maxi, maxi1);
    cout << maxi << endl
         << largest_index(arr, n, maxi);
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
    largest_element(arr, n);
    return 0;
}
