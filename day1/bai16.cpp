#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void snt(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int ok = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                ok++;
            }
        }
        if (ok == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
int soThuanNghich(int n)
{
    int tmp = n;
    int ok = 0;
    while (tmp > 0)
    {
        ok = ok * 10 + tmp % 10;
        tmp = tmp / 10;
    }
    if (ok == n)
    {
        return 1;
    }
    return 0;
}
int soChinhPhuong(int arr[], int n)
{
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (pow(sqrt(arr[i]), 2) == arr[i])
        {
            ok++;
        }
    }
    return ok;
}
void tong(int arr[], int n)
{
    int snt = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp = arr[i];
        int ok = 0;
        while (tmp > 0)
        {
            ok = ok + tmp % 10;
            tmp = tmp / 10;
        }
        int check = 0;
        for (int j = 2; j < ok; j++)
        {
            if (ok % j == 0)
            {
                check++;
            }
        }
        if (check == 0)
        {
            snt++;
        }
    }
    cout << snt;
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
    // so nguyen to
    snt(arr, n);
    // so thuan nghich
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (soThuanNghich(arr[i]))
        {
            dem++;
        }
    }
    cout << dem << endl;
    // so chinh phuong
    cout << soChinhPhuong(arr, n) << endl;
    // Số lượng số có tổng chữ số của nó là số nguyên  to
    tong(arr, n);
}