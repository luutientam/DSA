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
    int demChan = 0;
    int demLe = 0;
    int tongC = 0;
    int tongL = 0;
    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        if (arr[i] % 2 == 0)
        {
            demChan++;
            tongC += arr[i];
        }
        else
        {
            demLe++;
            tongL += arr[i];
            
        }
    }
    cout << demChan << endl
         << demLe << endl
         << tongC << endl
         << tongL;
}