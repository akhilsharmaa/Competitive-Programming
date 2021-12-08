#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

bool isPrime(int num){

    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return false;   
        }
    }
    return true;
}

void solution(){
   
    int n, count = 0;
    cin >> n;

    if(n <= 2){
        cout << 1 << "\n"; 
        return;
    }

    for (int i = 2; i <= n; i++){
        if(isPrime(i)) ++count;
    }
    
    cout<< count << "\n";
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