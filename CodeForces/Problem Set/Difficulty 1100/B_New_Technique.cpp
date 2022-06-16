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

bool isSame(int a[], int b[], int m){


	return true;
}

void solve(){

   ll n, m;
   cin >> n >> m;

   int row[n][m], col[m][n];

   for (int i = 0; i < n; ++i)
	 for(int j = 0; j < m; ++j){
	 	cin >> row[i][j];
	 }

   
   for (int i = 0; i < m; ++i)
	 for(int j = 0; j < n; ++j)
	   	cin >> col[i][j];


   	for (int i = 0; i < n; ++i){
   		
	}

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

