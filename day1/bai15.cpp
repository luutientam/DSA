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
    int l1 = 0;
    int l2 = -1e9;
    for (int i = 0; i < n; i++)
    {
        if (l1 <= arr[i])
        {
            l2 = l1;
            l1 = arr[i];
        }
    }
    cout << l1 << " " << l2;
}
