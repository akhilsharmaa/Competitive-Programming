

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define se           second 
#define MOD 		 1e9 + 7

void insertionSort(vector<pair<int, int>> arr, int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 

        while (j >= 0 && arr[j].fi > key){ 

            arr[j + 1] = arr[j].fi; 
            j = j - 1; 
        }

        arr[j + 1] = key; 
    } 
} 
  

void solve(){ 

   int n; cin >> n;
   vector<pair<int, int>> a, b;

   for (int i = 0; i < n; ++i){
   		int k; cin >> k;
   		a.pb({k, i});
   }

   for (int i = 0; i < n; ++i){
   		int k; cin >> k;
   		b.pb({k, i});
   }

   sort(a.begin(), a.end());
   sort(b.begin(), b.end());

   for(auto i: a){
   	cout << i.first << " ";
   }

   bool ok = 1;
   for (int i = 0; i < n; ++i){
   	if(a[i].second != b[i].second){
   		ok = false;
   	}
   }

   if(ok){
      bubbleSort(a, a.size());
   }
   	else cout << "-1\n";

}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

