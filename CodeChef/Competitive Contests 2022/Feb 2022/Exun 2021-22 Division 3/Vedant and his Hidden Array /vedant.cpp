#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

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
        
        ll n, a;cin >> n >> a;
        if(n == 1){
            if(a % 2 == 0)cout << "Even\n";
            else cout << "Odd\n";
            continue;
        }if(a% 2 == 1){
            if(n % 2 == 0)cout << "Even\n";
            else{
                cout << "Odd\n";
            }
        }else{
                cout << "Impossible\n";
        }

    }
    return 0;
}