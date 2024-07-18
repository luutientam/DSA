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
    int ok = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - i - 1])
        {
            ok++;
        }
    }
    if (ok == n / 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}