#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

// Selection of Cities SOLVED & ACCEPTED :) 

ll binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2) % MOD;
    if (b % 2)
        return (res * res * a) % MOD;
    else
        return( res * res) % MOD;
}

void solution(){
    
    ll testCase;
    cin >> testCase;
    
    while(testCase--){
       
       ll n;
       cin >> n;

       ll result =  binpow(2, n)  % MOD;
       cout << result - 1 << "\n"; 
       
    }
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
        MyFile << "1"; // writing example case
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