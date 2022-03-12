#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solution(){
   
   ll n;
   cin>>n;
   ll day[n];

   bool lackday = false;

   for (ll i = 0; i < n; i++){
       cin >> day[i];
   }

   ll growth = 1;

    for (ll i = 0; i < n; i++){

         if(day[i] == 0){
            if (lackday){
                cout << -1 << "\n";   
                return; 
            }
            lackday = true ;
         }else{
              lackday = false;
              
              if(day[i -1] == 1)
              growth += 5;
              else {
                growth += 1;
              }
         }
    }

    cout << growth << "\n";
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