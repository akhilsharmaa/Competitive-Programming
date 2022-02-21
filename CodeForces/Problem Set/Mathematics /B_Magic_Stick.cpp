#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// B. Magic Stick ACCEPTED :) 

void solve()
{

   ll x, y;
   cin >> x >> y;

   if (x < y)
   {
      if (x == 1)
         pNo else
         {
            while (x < y && x != 3)
            {
               if (x % 2)
                  x--;
               x /= 2;
               x *= 3;
            }
            if (x >= y)
               pYes else pNo
         }
   }
   else
      pYes
}

int main()
{

   // For Faster Output
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;

   while (tCase--)
   {
      solve();
   }

   return 0;
}

/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
