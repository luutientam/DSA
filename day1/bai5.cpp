#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[10000];
    for (int &t : arr)
    {
        cin >> t;
    }
    for (int i = 2; i < n; i += 2)
    {
        cout << arr[i] << " ";
    }
}