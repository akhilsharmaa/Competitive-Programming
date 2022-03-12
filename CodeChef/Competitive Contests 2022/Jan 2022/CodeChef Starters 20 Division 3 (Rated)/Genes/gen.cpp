#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// ACCEPTED : ) 
// 100 % 

void solution(){
   
   char a, b;

   cin >> a >> b;

   
    if(a == b){
        cout << a;
    }

    if( a == 'R' && b == 'B' || a == 'B' && b == 'R' )
    cout << 'R';

    if( a == 'G' && b == 'B' || a == 'B' && b == 'G' )
    cout << 'B';


    if( a == 'R' && b == 'G' || a == 'G' && b == 'R' )
    cout << 'R';

   
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