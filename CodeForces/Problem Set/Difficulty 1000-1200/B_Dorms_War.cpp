/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define loop(i,a,b)  for(int i=(a);i<=b;++i)
#define debug(x)     cout<<#x<<" "<<x<<" ";


void solve(){

	int n, k = 0;
	cin >> n;
	string str, bStr = "";;
	cin >> str >> k; 

	set<char> s;
	vector<int> arr(n);
	for (int i = 0; i < k; ++i){
		char in; cin >> in;
		s.insert(in);
	}

	for (int i = 0; i < n; ++i){
		if(s.find(str[i]) != s.end()){
			bStr += "1";
		}else bStr += "0";
	}

	int maxi = 0, lastOne = 0, lastZero = 0;

	for (int i = 0; i < n; i++){
		if(bStr[i] == '1'){
			maxi = max(i - lastOne, maxi);
			lastOne = i;
		}
	}

	cout << maxi << "\n";
}


// Ignored by Online Judges
void setupMachine(){
   // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   // if \"input.txt\" not exist : Create
   std::ifstream infile("input.txt");
   if(!infile.good()){
       ofstream MyFile("input.txt");
       MyFile << 1; // writing examplcase
    }

   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
}


int main(){
   
   // Faster IO & FileIO
   setupMachine();

   int t = 1; 
   
   cin >> t;
   while(t--){
     solve();
   }

   return 0;
}

