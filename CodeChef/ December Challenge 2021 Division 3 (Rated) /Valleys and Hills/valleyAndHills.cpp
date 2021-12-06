#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solution(){
   
    int n, m;
    // n = hills | m = valley
    cin >> n >> m;
    
    int maxMN = m + n + 2;
    cout << maxMN << "\n";

    for (int i = 0; i < maxMN; i++){

        if (i % 2 == 0){
            cout << "0";
        }else {
            cout << "1";
        }    
    }cout << "\n";
    

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
   for(int _i = 0; _i < testCase; _i++){ 
       solution();
   }
   return 0;
 }