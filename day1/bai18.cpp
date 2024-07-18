#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (ll &t : arr)
    {
        cin >> t;
    }
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] * arr[i + 1] < 0)
            {
                cout << arr[i] << " ";
            }
        }
        else if (i == n - 1 && arr[i] * arr[i - 1] < 0)
        {
            cout << arr[i];
        }
        else
        {
            if (arr[i] * arr[i + 1] < 0 || arr[i] * arr[i - 1] < 0)
            {
                cout << arr[i] << " ";
            }
        }
    }
}
