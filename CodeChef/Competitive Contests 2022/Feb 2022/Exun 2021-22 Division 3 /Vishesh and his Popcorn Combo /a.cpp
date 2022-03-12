#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

void solution(){
    
    ll a1, a2;
    ll b1, b2;
    ll c1, c2;

    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;

    ll m;
    m = max(a1 + a2, b1 + b2);
    m = max(m, c1 + c2);

    cout << m << "\n";    
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
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
    solution();
    }
    return 0;
}