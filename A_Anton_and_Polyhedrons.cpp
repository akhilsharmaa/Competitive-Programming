#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 785A - Anton and Polyhedrons ACCEPTED 


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;
   
   ll sum = 0;

   while(tCase--){
       
       string str = "";
       cin >> str;

       if(str == "Tetrahedron"){
           sum += 4;
       }else if(str == "Cube"){
           sum += 6;
       }else if( str == "Octahedron"){
           sum += 8;
       }else if( str == "Dodecahedron"){
           sum += 12;
       }else if( str == "Icosahedron"){
           sum += 20;
       }

   }

   cout << sum  << "\n";

   return 0;
}

/* 
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

