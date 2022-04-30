/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    
   // Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);

    int mini = INT_MAX, minPos = 0;

    for (int i = 0; i < n; i++){
        int input;
        cin >> input;

        if(input < mini){
            mini = input;
            minPos = i;
        }

        arr[i] = input;
    }

    if(minPos > n-2){
        mini = INT_MAX, minPos = 0;
        
        for (int i = 0; i < n - 2; i++){
            int input;
            cin >> input;

            if(input < mini){
                mini = input;
                minPos = i;
            }

                arr[i] = input;
        }
    }

    cout << minPos + 2;
}


int main(){

   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   solve();

   return 0;
}

