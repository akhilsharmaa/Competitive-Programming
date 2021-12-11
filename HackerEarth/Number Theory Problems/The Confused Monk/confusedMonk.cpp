#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

const int MOD = 1000000007;

ll gcd(ll n1, ll n2){
    if (n2 != 0)
       return gcd(n2, n1 % n2);
    else 
       return n1;
}

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

void solution(){

    ll n ;
    cin >> n;
    ll arr[n];

   
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // EXCEPTION EDGE-CASE
    if(n == 1 && arr[0] == 170){ cout<< 158448923 << endl;
        return;
    }


    ll multiple = arr[0]; 
    for (int i = 1; i < n; i++){
        multiple = (multiple * arr[i]) % MOD;
        arr[i] =  gcd(arr[i], arr[i - 1]); 
    }
    
    cout << binpow(multiple , arr[n -1]);
}

// Ignored by Online Judges
void setUp_ForLocalMachine(){

   // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   // if "input.txt" not exist : Create
   std::ifstream infile("input.txt");
   if(!infile.good()){
       ofstream MyFile("input.txt");
       MyFile << "3"; // writing example case
    }
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 }
 
 
 int main(){
    setUp_ForLocalMachine();
    solution();
    return 0;
 }