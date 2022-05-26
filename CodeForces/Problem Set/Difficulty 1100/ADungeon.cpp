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
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){

	ll a,b,c;
	cin >> a>> b>> c;

	ll sum = a+b+c;
	if(sum % 9 == 0){
		if(a >= sum/9 && b >= sum/9 && c >= sum/9)pYes
		else pNo
	}else pNo

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





