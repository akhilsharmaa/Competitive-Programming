#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// Valleys and Hills
// problem link : https://www.codechef.com/DEC21C/problems/VANDH
// ACCEPTED :) 100% 

void solution(){
   
    int N  , M  ;
    cin >> N  >> M  ;

    string ans = "";

    if(N  == M  ){
        for (int i = 0; i <  N +1 ; i++){
            ans += "01";
        }
    }


    else if( M > N ){
        for (int i = 0; i < N + 1; i++)
            ans += "10";
        
        for (int i = 0; i < M - N -1; i++){
            ans += "110";
        }

        ans+= "1";

    }else {
        // N > M

        for (int i = 0; i < M; i++){
            ans += "01";
        }
        
        for (int i = 0; i < N - M ; i++){
            ans += "010";
        }
    }

    cout << ans.size() << "\n";
    cout << ans << "\n";
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