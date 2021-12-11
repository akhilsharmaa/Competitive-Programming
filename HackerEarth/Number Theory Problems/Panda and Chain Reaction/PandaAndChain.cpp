#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;


void solution(){

    ll mod = 1000003;
    
    ll arr[mod] = {1};

    for (ll i = 1; i < mod; i++){
        arr[i] = (i * arr[i -1]) % mod;
    }
   
    ll testCase;
    cin >> testCase;

    while(testCase--){

        ll x, n;
        cin >> n >> x;

        if(n > mod || x > mod){
            cout << 0 << endl;
        }else
        cout <<( arr[n] * x) % mod <<endl;

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