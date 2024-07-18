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
    ll tong = 0;
    ll tich = 1;
    ll m = 1000000007;
    for (int i = 0; i < n; i++)
    {
        tong += arr[i];
        tich *= arr[i];
    }
    cout << tong % m << "\n"
         << tich % m;
         cout <<"nguyen thi ngoc anh 
         "
}