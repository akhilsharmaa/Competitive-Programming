#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

/*   1 2 3 4 
       2 3 4 
         3 4 
           4 */

// WORKING :) 
void solution(){
   
   int n;
   cin >> n;

    for (int  i = 1; i <= n; i++){

        if( i >= 11) for (int j = 1; j <= i - 10; j++)
          cout << " "; 
        
        if( i >= 101) for (int j = 1; j <= i - 100; j++)
          cout << " "; 

        for (int j = 0; j <= n; j++){
            j >= i ? cout << j << " " : cout << "  " ; 
        }cout << endl;
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