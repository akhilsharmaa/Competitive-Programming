#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1620B - Triangles on a Rectangle ACCEPTED 

void solve(){
    
   ll w, h;
   cin >> w >> h;
   
   ll nPointOnHor;cin >> nPointOnHor; vector<int> arr(nPointOnHor);
   for (int i = 0; i < nPointOnHor; i++) cin >> arr[i]; 
   ll H1Base = arr.back() - arr.front();
    
   ll nPointOnHor2;cin >> nPointOnHor2; vector<int> arr2(nPointOnHor2);
   for (int i = 0; i < nPointOnHor2; i++) cin >> arr2[i]; 
   ll H2Base = arr2.back()- arr2.front();

   ll nPointOnVer;cin >> nPointOnVer; vector<int> arr3(nPointOnVer);
   for (int i = 0; i < nPointOnVer; i++) cin >> arr3[i]; 
   ll V1Base = arr3.back()- arr3.front();

   ll nPointOnVer2;cin >> nPointOnVer2; vector<int> arr4(nPointOnVer2);
   for (int i = 0; i < nPointOnVer2; i++) cin >> arr4[i]; 
   ll V2Base = arr4.back()- arr4.front();

   H1Base = H1Base * h;
   H2Base = H2Base * h;

   V1Base = V1Base * w;
   V2Base = V2Base * w;

   ll maxi = max(H1Base , max(H2Base , max(V1Base, V2Base))); 
   cout << maxi << endl;
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}

/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

