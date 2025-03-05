#include <iostream>
#include <iomanip>
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
    double sum = 0;
    int demtbc = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 2 && arr[i] > 0)
        {
            int dem = 0;
            for (int j = 2; j < arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    dem++;
                }
            }
            if (dem == 0)
            {
                sum += arr[i];      
                demtbc++;
            }
        }
    }
    cout << setprecision(3) << fixed << sum / demtbc;
}