#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solution(){
   
    int hill , valley;
    cin >> hill >> valley;

    if(hill > valley){

        cout << ( 2 * (valley + 1) + (3 * (hill - valley))) << "\n";

        for (int i = 0; i <= valley; i++)
            cout << "10";
        
        for (int i = 0; i < hill - valley; i++)
            cout << "010";
        
        // Hills equals valley 
    }else if(hill == valley){
        
        cout << ( 2 * (valley + 1)) << "\n";
        for (int i = 0; i <= valley; i++){
            cout << "10";
        }
    }else {
        
        cout << ( 2 * (hill + 1) + (3 * (valley - hill))) << "\n";

        for (int i = 0; i <= hill; i++)
            cout << "01";
        
        for (int i = 0; i < valley - hill; i++)
            cout << "101";
    }

    cout << "\n";
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