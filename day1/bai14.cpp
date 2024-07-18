#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
            b = b - a;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int &t : arr)
    {
        cin >> t;
    }
    int action = arr[0];
    for (int i = 1; i < n; i++)
    {
        action = gcd(action, arr[i]);
    }
    cout << action;
}