#include <bits/stdc++.h>
using namespace std;

// CORRET_ANSWER 100%

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector 

void solution(){
    
    int t;
    cin >> t;
    while(t--) {
        int n,days;
        ll sum=1;
        cin >> n >> days;
        for (int i = 1; i <= days; i++){
            
            if (i<=10) {
                sum*=2;
                if(sum>n){
                    sum = n;
                    break;
                }
            }
            else{
                sum*=3;
                if(sum>n){
                    sum = n;
                    break;
                }
            }
            
        }
    cout << sum << endl;
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