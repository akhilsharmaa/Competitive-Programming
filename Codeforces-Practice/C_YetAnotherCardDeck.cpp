#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl	       "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v) 	     v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

    stack<int> st1, st2;
    
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i){
    	int x; cin >> x;
    	st2.push(x);
    }
    
    while(st2.size() > 0){
    	st1.push(st2.top());
    	st2.pop();
    }
    
    // while(st1.size() >= 1){
    // 	cout << st1.top() <<  " ";
    // 	st1.pop();
    // }
   
    
    while(q > 0){
    	
    	int temp = -1, query, cnt = 1;
        cin >> query;
        
        while(st1.size() > 0){
          
          if(st1.top() == query){
            temp = st1.top();
            st1.pop();
            break;
          }
          
        	st2.push(st1.top());
        	st1.pop();
        	cnt++;
        }
        
        // Re-Inserting 
        while(st2.size() > 0){
      		st1.push(st2.top());
      		st2.pop();
        }
        
        st1.push(temp);
        
        cout << cnt << ' ';
        cnt = 0;
        
        q--;
    }


}


int main(){

  fastIO 
  int t = 1;
   while(t--) solve();

  return 0;
}

