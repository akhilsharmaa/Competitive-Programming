#include <bits/stdc++.h>
#include <limits>
typedef long long ll;

using namespace std;

void solution(){
   
    int i;
	cin >> i;
    cout << i + 4 << endl;

    double d;
	cin >> d;
    cout.precision(1); 
    cout << fixed<< d + 4.0 << endl; 

    cin.ignore();
    char a [100];
    cin.getline(a,100);
    cout << "HackerRank " << a;

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