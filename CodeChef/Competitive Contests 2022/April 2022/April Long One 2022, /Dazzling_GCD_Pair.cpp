/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
  

void solve(){
  
    ll a, b;
    cin >> a >> b;
    
    if(a % 2 == 0){
        if(b - a >= 2)
            cout << a << " " << a + 2 << endl;
        else  cout << -1 << endl;
    }else {
        if(b - a >= 3){
            if(a % 3 == 0){
                cout << a << " " << a + 3 << endl;
            }else 
                cout << a + 1 << " " << a + 3 << endl;
        }else {
            cout << -1 << endl;
        }    
    }
}


int main(){

   int t; cin >> t;
   while(t--)solve();

   return 0;
}

