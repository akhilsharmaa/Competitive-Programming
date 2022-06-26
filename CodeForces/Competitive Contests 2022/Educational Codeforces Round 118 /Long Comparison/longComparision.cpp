#include <bits/stdc++.h>
typedef long long ll;

using namespace std;


// 1 test case passed :) 
void solution(){
   
   ll testCase;
   cin >> testCase;
   for(ll _i = 0; _i < testCase; _i++){
       
       ll a, b;
       ll a_zero , b_zero;
       
       cin >> a >> a_zero;
       cin >> b >> b_zero;

        // A 
        for (ll i = 0; i < a_zero; i++){
            a = a * 10;
        }
        
        // B
        for (ll i = 0; i < b_zero; i++){
            b = b * 10;
        }


       if(a > b)
        cout<< ">\n";
       else if (a < b)
        cout << "<\n";
        else {
        cout << "=\n";
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