#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    int max = arr[0];
    int viTri = 0;
    for(int i = 0 ; i < n ; i++){ 
        if(max < arr[i]){
            max = arr[i];
            viTri = i;
        }
    }
    cout << max << " " << viTri;
}
