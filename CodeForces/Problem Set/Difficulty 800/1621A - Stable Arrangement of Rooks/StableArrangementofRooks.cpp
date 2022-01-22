#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

// Solution of 1621A - Stable Arrangement of Rooks
// Accepted

void solution(){
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
        
        ll n, k;
        cin >> n >> k;


        if(k  > (n+1)/2){
            cout << -1 <<  "\n";
        }else{

            char ch[n+1][n+1];

            for (int i = 1; i <= n; i++){
                for (int j = 1; j <= n; j++){
                    ch[i][j] = '.';
                }
            }


            int x= 1;

            while (k--){
                ch[x][x] = 'R';
                x+=2;
            }
            
           
            for (int i = 1; i <= n; i++){
                for (int j = 1; j <= n; j++){
                    cout << ch[i][j];
                }cout << "\n";
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