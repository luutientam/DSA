#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool snt(int n)
{
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int &t : arr)
    {
        cin >> t;
    }
    for (int i = 0; i < n; i++)
    {
        int sumLeft = 0;
        int sumRight = 0;
        for (int j = i + 1; j < n; j++)
        {
            sumRight += arr[j];
        }
        for (int l = 0; l <= i - 1; l++)
        {
            sumLeft += arr[l];
        }
        if (snt(sumLeft) == 0 && snt(sumRight) == 0)
        {
            cout << i;
        }
    }
}
