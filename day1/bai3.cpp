#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int &t : arr)
    {
        cin >> t;
    }
    int minNum = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (minNum > arr[i])
        {
            minNum = arr[i];
        }
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (minNum == arr[i])
        {
            dem++;
        }
    }
    cout << dem;
}