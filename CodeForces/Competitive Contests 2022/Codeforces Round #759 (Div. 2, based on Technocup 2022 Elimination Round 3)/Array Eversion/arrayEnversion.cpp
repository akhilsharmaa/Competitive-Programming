#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// Wrong answer on pretest 2
void solution(){    
   
   ll n;
   cin >> n;
   ll arr[n];
   for (ll i = 0; i < n; i++){
       cin >> arr[i];
   }
   

   for (ll i = 1; i < n; i++){
       if(arr[i] < arr[i -1] && arr[i] < arr[i +1]){
           cout << arr[i] << "\n";
           return;
       }

       if(i == n - 1){
           cout << 0 << "\n";
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
       MyFile << "3"; // writing example case
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