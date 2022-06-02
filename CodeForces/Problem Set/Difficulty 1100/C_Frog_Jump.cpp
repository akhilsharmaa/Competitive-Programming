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

// SOLVED & ACCEPTED :)

void solve(){

   
	string str = "R", temp;
	cin >> temp;
   str += temp + "R";

	int n = str.length();	

	int lastR = n, maxi = 0;

	for (int i = n; i >= 0; --i){
		if(str[i] == 'R'){
			maxi = max(maxi, lastR - i);
         lastR = i;
		}
	}

   ll ans = maxi;
   if (ans == 0) ans = n + 1;

   cout << ans << "\n";
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

   int t = 6; 
   
   cin >> t;
   while(t--){

   		solve();

   }

   return 0;
}

