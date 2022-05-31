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

   int n = 0;
   cin >> n;			
   vector<int> v(n);

   bool flag = true;
   int k = 0;

   for (int i = 0; i < n; ++i){
   		cin >> v[i];
   		if(flag && v[i] ==1){
   			k ++;
   		}else flag = 0;
   }


    if(k == n){
    	if(k % 2 == 0) cout << "Second\n";
    	else cout << "First\n";
    	return;
    }


    if(k % 2 == 0 ) cout << "First\n";
    else cout << "Second\n";

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

