#include <bits/stdc++.h>
using namespace std;

// Partially - Accepted 

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

int power(ll x, ll y){
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int High(ll d){
    d -= 10;

    ll m = 1024;

    for (int i = 0; i < d ; i++){
        m *= 3;
    }
    
    return m;
}

void solution(){
    
    ll p, d;
    cin >> p >> d;
    
    ll infected = infected = power(2, d);
    if(d > 10){
        infected = High(d);
    }

    
    if(p <= infected){
        cout << p << "\n";
    }else {
        cout << infected << "\n";
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
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
    solution();
    }
    return 0;
}