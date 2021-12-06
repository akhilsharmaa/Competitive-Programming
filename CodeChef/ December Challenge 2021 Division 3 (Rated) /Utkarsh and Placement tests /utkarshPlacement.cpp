#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// ACCEPTED :) 
// Question link : https://www.codechef.com/DEC21C/problems/UTKPLC

void solution(){
   
   int testCase;
   cin >> testCase;
   for(int _i = 0; _i < testCase; _i++){
       
        char first_p , second_p , third_p;
        cin >> first_p >>  second_p >>  third_p;
        
        char x, y;
        cin >> x >> y;


        if(x == first_p || y == first_p){
        // cout << "1st case :";

            if(x == first_p) cout << x << "\n";
            else if(y == first_p) cout << y  << "\n";
        }
        
        else if(x == second_p || y == second_p){

        // cout << "2nd case :";

            if(x == second_p) cout << x << "\n";
            else if(y == second_p) cout << y  << "\n";
        }

        else if(x == third_p|| y == third_p){
        // cout << "3rd case :";

            if(x == third_p) cout << x << "\n";
            else if(y == third_p)  cout << y << "\n";
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
   solution();
   
   return 0;
 }