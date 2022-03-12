#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

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
    ll n;
    cin >> n;
    int arr[n];

   for (int i = 0; i < n; i++){
    cin >> arr[i];
   }
   
   ll result =  n - mostFrequent(arr, n);

   if(result == n){
       result--;
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