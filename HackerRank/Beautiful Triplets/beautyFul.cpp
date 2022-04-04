#include <bits/stdc++.h>
using namespace std;


int main(){

    // Taking INPUT Array
    int n, d, cnt = 0;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values

    
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[j] - arr[i] == d){
                for (int k = j+1; k < n; k++){
                    if(arr[k] - arr[j] == d){
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    
    cout << cnt << endl;

   return 0;
}