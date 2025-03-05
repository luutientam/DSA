#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    double tong = 0;
    int dem = 0 ;
    for(int i = 0 ; i < n ; i++){ 
        if(arr[i] % 2 == 0){
            tong += arr[i];
            dem++;
        }
    }
    cout << tong / dem;
}
