#include <iostream>
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
    int x;
    cin >> x;
    int demNho = 0;
    int demLon = 0;
    for (int i = 0; i < n; i++)
    {
        x < arr[i] ? demLon++ : demNho++;
    }
    cout << demLon << "\n"
         << demNho;
}