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
#define debug(x)     cout<<#x<<" "<<x<<"\n";


void solve(){

   int n = 0;
   cin >> n;

   string s[n];

   for (int i = 0; i < n; ++i){
   		cin >> s[i];	
   }	
   
   int cnt = 0;

   for (int i = 0; i < n; ++i){
	   	for (int j = 0; j < n; ++j){
	   		if(i == j || s[i] == s[j])
	   			continue;	

	   		if(s[i][0] == s[j][0] 
	   			|| s[i][1] == s[i][1]
	   			|| s[i][0] == s[j][1]
	   			|| s[i][1] == s[j][0]){
	   			cnt++;
	   		}

	   	}
   }

   cout << cnt << endl;

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

