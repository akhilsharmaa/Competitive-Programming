/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push back
#define no           cout<<"NO"<<endl;
#define yes          cout<<"YES"<<endl;
#define loop(i,a,b)  for(int i=(a);i<=b;++i)
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){

	loop(i, 0, 5){
		cout << i << " ";
	}cout << "\n";

}

int main(){

   // Faster I/O
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t = 1; 
   cin >> t;

   while(t--){
     solve();
   }

   return 0;
}





