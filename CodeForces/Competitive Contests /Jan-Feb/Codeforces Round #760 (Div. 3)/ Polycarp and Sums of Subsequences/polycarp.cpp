#include <bits/stdc++.h>
typedef long long ll;

using namespace std;


// ACCEPTED :) 
void solution(){
   
   int arr[7];
   for (int i = 0; i < 7; i++){
       cin >> arr[i];
   }

   vector<int> result;
   ll abc_sum = arr[6]; 
    ll sum = 0;


    int i =0;
   while(abc_sum >= sum){

       if (result.size() == 2){

           if(sum + arr[i] < abc_sum){
               i++;
               continue;
           }
       }

       if(abc_sum == sum)break;

       result.push_back(arr[i]);

       sum += arr[i];
       i++;
   }
   


   cout <<  result[0] <<  " " <<  result[1] << " " << result[2] << "\n";
   
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
    
    ll testCase;
    cin >> testCase;
    
    while(testCase--){
       solution();
    }
    return 0;
 }