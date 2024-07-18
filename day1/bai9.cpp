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
    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                dem++;
            }
        }
        int tanSuat = 1;
        if (dem == 0)
        {
            for (int k = i + 1; k < n; k++)
            {
                if (arr[i] == arr[k])
                {
                    tanSuat++;
                }
            }
            cout << arr[i] << " " << tanSuat << "\n";
        }
    }
}