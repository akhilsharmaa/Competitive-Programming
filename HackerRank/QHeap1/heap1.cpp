#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// ACCEPTED :) Fully 
void solution(){
   
    int query;
    cin >> query;
    
    set<int> s;
    
    for (int i = 0; i < query; i++) {
        int t, value;
        cin >> t;
        
        switch (t) {
        case 1:
            cin >> value;
            s.insert(value);
            break;
        case 2:
            cin >> value;
            s.erase(s.find(value));
            break;
        case 3:
            cout << *s.begin() << endl;
            break;
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
    
    int testCase;
    cin >> testCase;
    
    while(testCase--){
       solution();
    }
    return 0;
 }