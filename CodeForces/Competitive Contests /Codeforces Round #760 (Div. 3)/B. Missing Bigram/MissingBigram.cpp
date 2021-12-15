#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solution(){


   ll c;
   cin>> c;
        
    string result;

   
   for (int i = 0; i < c - 2; i++){

       string s;
       cin >> s;

       if(i == 0){ result+= s; continue;}
       if(i == c - 3){result+= s;}

       


   }
   
    cout << result << "\n";
   
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