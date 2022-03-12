#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

void solution(){
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
        
        ll a, b, c;
        cin >> a >> b>> c;

        ll max; 

        if(a > b){
            if(a > c){
                if(a <= 50){
                    cout << "NOTA\n";
                }else{
                    cout << "A\n";
                }
            }else{
                if(c <= 50){
                    cout << "NOTA\n";
                }else{
                    cout << "C\n";
                }
            }
        }else {

            if(b > c){
                if(b <= 50){
                    cout << "NOTA\n";
                }else{
                    cout << "B\n";
                }
            }else{
                if(c <= 50){
                    cout << "NOTA\n";
                }else{
                    cout << "C\n";
                }
            }
        }
       
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