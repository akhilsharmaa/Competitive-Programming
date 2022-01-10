#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// ACCEPTED :) 

// Problem link : https://www.codechef.com/DEC21C/problems/LISTLIST

int mostFrequent(int arr[], int n){
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return max_count;
}

void solution(){
   
   int testCase;
   cin >> testCase;
   for(int _i = 0; _i < testCase; _i++){
       
       int N;
       cin >> N;
       int arr[N];
       for (int i = 0; i < N; i++){
           cin >> arr[i];
       }

       int freq =  mostFrequent(arr, N);

       if (N == 1 || freq == N){
           cout << 0 << '\n';
       }else if(freq >= 2){
           cout <<( N - freq )+ 1 << '\n';
       }else {
           cout << -1 << '\n';
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