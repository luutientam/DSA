#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll f[1000];
void fibo() // tinh 93 so fibo
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 93; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}
int tim(ll n)
{
    for (int i = 0; i < 93; i++)
    {
        if (f[i] == n)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    fibo();
    int n;
    cin >> n;
    ll arr[n];
    for (ll &t : arr)
    {
        cin >> t;
    }
    int ok = 0;
    for (ll i : arr)
    {
        if (tim(i))
        {
            cout << i << " ";
            ok++;
        }
    }
    if (ok == 0)
    {
        cout << "NONE";
    }
}
