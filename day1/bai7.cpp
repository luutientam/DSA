#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int &t : arr)
    {
        cin >> t;
    }
    int minVa = 10e9;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[i] - arr[j]) < minVa)
            {
                minVa = abs(arr[i] - arr[j]);
            }
        }
    }
    cout << minVa;
}