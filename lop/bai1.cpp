#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    int min = arr[0];
    int viTri = 0;
    for(int i = 0 ; i < n ; i++){ 
        if(min > arr[i]){
            min = arr[i];
            viTri = i;
        }
    }
    cout << min << " " << viTri;
}



