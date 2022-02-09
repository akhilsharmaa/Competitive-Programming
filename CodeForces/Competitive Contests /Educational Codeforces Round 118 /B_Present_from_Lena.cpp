#include <bits/stdc++.h>
using namespace std;

#define ll      long long int;
#define pb      push_back;
#define MOD     1000000007;
#define vt      vector;
#define pYes    cout << "YES" << endl;
#define pNo     cout << "NO" << endl;


// 118B - Present from Lena ACCEPTED 

void printLower(int n){

    int inv = n;
    for (int i = 0; i < n; i++){  
        // SPACE 
        for (int j = i; j >= 0; j--) 
            cout << "  ";    

        int cnt = 1;
        cout << "0";
        for (int j = 1; j < inv; j++, cnt++)    
            cout  <<  " " << cnt;

        cnt-= 2;
        while (cnt >= 0){
            cout  <<  " " << cnt;
            cnt--;
        }

        inv--; cout<< "\n";
    }
}

void solve(){
    
   int n; cin >> n;

   int temp_n= n; 
   // PRINT THE UPPER PART 
   for (int i = 0; i <= n; i++){
       // BLANK SPACES
       for (int j = temp_n; j > 0; j--)  
            cout << "  ";
 
       int count = 1;
       cout << "0";
       for (int j = 1; j <= i; j++, count++){
            cout  <<  " " << count;
       }
            

       count-=2;
       for (int j = 0; j < i; j++, count--){
            cout  <<  " " << count;
       }
       
        temp_n--;
        cout << "\n";
   }
    
   printLower(n); 
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

    solve();

   return 0;
}

/* 
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

