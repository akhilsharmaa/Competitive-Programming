#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

// Accepted
void solution(){
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
       
       ll l1, l2, l3;

       cin >> l1 >> l2 >> l3;
        
       if(l1 != l2  && l1 != l3 && l2 != l3){

            if(( l1 + l2 == l3 ) || 
               ( l2 + l3 == l1 )|| 
               ( l1 + l3 == l2 )){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
              
       }

       else if((l1 == l2 && l3 % 2 == 0 )|| 
           ( l2 == l3 && l1 % 2 == 0 )|| 
           ( l3 == l1 && l2 % 2 == 0 )){
                cout << "YES\n";
        }else{
            cout << "NO\n";
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