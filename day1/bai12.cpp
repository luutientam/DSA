#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int &t : arr)
    {
        cin >> t;
    }
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
        if (arr[maxIndex] < arr[i])
        {
            maxIndex = i;
        }
    }
    cout << minIndex << " " << maxIndex;
}