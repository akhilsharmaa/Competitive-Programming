#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solution(){
   
   int n, k, q;
   cin >> n >> k >> q;

   int arr[n];
   for (int i = 0; i < n; i++)
   cin >> arr[i];

   // NOW ROTATE 
   for (int j = 0; j < k; j++){
       
       int temp = arr[n-1];

       for (int i = n- 1; i > 0; i--){
           arr[i] = arr[i-1];
       }

       arr[0] = temp;

   }
   
   
   int p; 
   while(q--){
       cin >> p;
       cout << arr[p] << endl;
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