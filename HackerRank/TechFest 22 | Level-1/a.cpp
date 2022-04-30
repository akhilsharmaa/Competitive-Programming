#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

int main(){

    // Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);
    
    int maxi = INT_MIN;
    int evenCnt = 0, oddCnt = 0;
    for (int i = 0; i < n; i++){
        int input ;
        cin >> input;
        maxi = max(input, maxi);
        if(input % 2 == 0)evenCnt++;
        else oddCnt++;
        arr[i] = input; // input-values
    }

    // sort(arr.begin(), arr.end());

    ll ans = 0, leftDay =0;
    for (int i = 0; i < n; i++)
        leftDay +=  maxi - arr[i];
    
    int j =0;
    while (leftDay){

        for (int i = 0; i <= n; i++){
            if(arr[i] < maxi){
                if(i-1 % 2 ==0 ){
                    arr[i]-= 2;
                    ans++;
                }else{
                    arr[i]--;
                    ans++;
                }
                break;
            }
        }

        leftDay--;
    }

    cout << ans-1 ;
    return 0;
}