#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector


// Correct Answer:) 


void solution(){
    
    double t1, t2, r1, r2;
    cin >> t1 >> t2 >> r1 >> r2;

    double t = pow(t1, 2)/ pow(r1, 3);
    double r = pow(t2, 2)/ pow(r2, 3);


    if(t == r){
        cout << "Yes\n";
    }
    else 
        cout << "No\n";
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