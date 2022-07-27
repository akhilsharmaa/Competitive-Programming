#include <bits/stdc++.h>
using namespace std;

// #define int long long 
#define int long long int

// C - Hamburgers SOLUTION 

bool checkI(int i, int rb, int rs, int rc,
             int nb, int ns, int nc, 
             int pb, int ps, int pc, 
             int r){
    
        int nb_ = rb*i - nb;
        int ns_ = rs*i - ns;
        int nc_ = rc*i - nc;

        if(nb_ < 0) nb_ = 0;
        if(ns_ < 0) ns_ = 0;
        if(nc_ < 0) nc_ = 0;

        int total = (nb_ * pb) + (ns_ * ps) + (nc_ * pc);
        return total <= r;
}

int solve(){
    //Taking Recipe string 
    string s;
    cin >> s;
    int nb,ns,nc;
    cin >> nb >> ns >> nc;
    int pb,ps,pc;
    cin >> pb >> ps >> pc;
    int r;
    cin >> r;

    int rb = 0, rs = 0, rc = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='B') rb++;
        else if(s[i]=='S') rs++;
        else rc++;
    }

    int ans = 0;
    int left = 0, right = 1e14;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(checkI(mid,rb,rs,rc,nb,ns,nc,pb,ps,pc,r)==true){
            ans = mid;
            left = mid+1;
        } else{
            right = mid-1;
        }
    }
    return ans;
}

int32_t main(){
    int ans = solve();
    cout << ans << endl;
    return 0;
}



/*
bool isPossible(ll b, ll s, ll c, 
                ll reqB, ll reqS, ll reqC, 
                ll prB, ll prS, ll prC, 
                ll ruble, ll toMake){
    
    ll stillReqBread = toMake * reqB - b;
    ll stillReqSauce = toMake * reqS - s;
    ll stillReqCheese= toMake * reqC - c;

    if(stillReqBread < 0)stillReqBread = 0;
    if(stillReqSauce < 0)stillReqSauce = 0;
    if(stillReqCheese < 0)stillReqCheese = 0;

    ll reqRuble = (stillReqBread * prB )+ 
                  (stillReqSauce * prS )+ 
                  (stillReqCheese * prC);

    return reqRuble <= ruble;
}

void solve(){
    
   string recipe; cin >> recipe;

   ll bread, sauce, cheese,  priceOfBread, 
   priceOfSauce, priceOfChesse, ruble ;

   cin >> bread >> sauce >> cheese ;
   cin >> priceOfBread >>  priceOfSauce >>  priceOfChesse;
   cin >> ruble;

   ll reqBread=0,  reqSauce=0, reqCheese=0, n= recipe.length();
   for (ll i = 0; i < n; i++){
       if(recipe[i] == 'B')reqBread++;
       else if(recipe[i] == 'S')reqSauce++;
       else reqCheese++;
   }

   ll l = 0, r = 1e14, ans = 0;
   while (l <= r){

        ll mid = l + (r - l)/ 2;
        if(isPossible(bread, sauce, cheese, 
                    reqBread, reqSauce, reqCheese, 
                    priceOfBread, priceOfChesse, priceOfSauce, 
                    ruble, mid) == true){

            ans = mid;
            l = mid + 1;
        }else {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}


int main(){

        solve();
        return 0;
}

*/

