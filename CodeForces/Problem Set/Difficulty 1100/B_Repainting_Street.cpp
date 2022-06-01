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

   ll n=0, k=0;
   cin >> n >> k;

   vector<int> a(n);
   map<int, int> mp;

   for (int i = 0; i < n; ++i){
   		cin >> a[i];
   		mp[a[i]]++;
   }
   

   map<int, int> :: iterator it = mp.begin();
   while(it != mp.end()){
      cout << it->first << "-" << it->second << " ";
      it++;
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
     cout << "\n";
   }

   return 0;
}

