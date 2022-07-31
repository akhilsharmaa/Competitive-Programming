#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 			1e9 + 7


void solve(){ 

	int n, m;
	cin >> n >> m;

	string s[n+1];
  for (int i=0;i<n;)cin >> s[i++];

  for (int i=0; i<m; ++i){

		  int fast = n-1, slow = fast, cnt = 0;

		  while(fast >= 0){

			  if(s[fast][i] == 'o' || fast == 0){
			   	
			  	while(slow > fast){
			  		if(cnt > 0)
			  			s[slow][i] = '*'; 
			  		else 
			  			s[slow][i] = '.'; 
			  		slow--, cnt--;
			  	}

			  	slow = fast -1;
			  	cnt = 0;

			  }else if(s[fast][i] == '*'){
			   	cnt++;
			  }

   			fast--;
   		}

   		int up = 0;
   		if(s[up][i] == '*'){

   			s[up][i] = '.';

   			while(s[up][i] == '.' && up < n){
   				s[up][i] == '.';
   				up++;
   			}	

   			s[up-1][i] = '*';
   		}

  }

  for (int i = 0; i < n; ++i)
	  cout << s[i] << endl;
}


int main(){

  // fastIO // Fast-I/O 
  int t = 1;cin >> t;
  while(t--) {
  	solve();
  }

  return 0;
}
