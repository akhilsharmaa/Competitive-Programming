#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// NOT ACCEPTED :()
bool isPrime(int num){

    if(num == 1)return false;

    for (int i = 2; (i * i )< num ; i++){
         if (num % i  == 0){
                return false;   
        }
    } 
    return true;
}

void solution(){
   
   int testCase;
   cin >> testCase;
   for(int _i = 0; _i < testCase; _i++){
       
       int num;
       cin >> num;

       if (isPrime(num))
            cout << "yes\n";
        else 
            cout << "no\n";
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