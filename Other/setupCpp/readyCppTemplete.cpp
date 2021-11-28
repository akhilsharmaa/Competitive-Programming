#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solution(){
   
   int testCase;
   cin >> testCase;
   for(int _i = 0; _i < testCase; _i++){
       
   }
   
}

// Ignored by Online Judges
void setUp_ForLocalMachine(){

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
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   setUp_ForLocalMachine();
   solution();
   return 0;
 }