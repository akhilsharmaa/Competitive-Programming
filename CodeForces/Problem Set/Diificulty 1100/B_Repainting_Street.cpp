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


// 1415B - Repainting Street ACCEPTED 

void solve(){

   ll n=0, k=0;
   cin >> n >> k;

   vector<int> a(n);

   for (int i = 0; i < n; ++i){
         cin >> a[i];
         
   }

   int mx = INT_MAX;
   for (int i = 1; i < 101; ++i){
      int cnt = 0;
      int j = 0;

      while(j < n){
         while(a[j] == i && j < n)
            j++;
         if(j >= n)break;
         j += k;
         cnt++;
      }
      mx = min(mx, cnt); 
   }

   cout << mx << endl;
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

