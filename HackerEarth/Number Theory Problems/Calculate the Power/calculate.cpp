#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

// ACCEPTED :) 
ll helper(ll a,ll b){
        if(b==0) return 1;
        if(a==0)return 0;

        ll ans;
        if(b%2==0){
            ans=helper(a,b/2);
            return ((ans%mod)*(ans%mod))%mod;
        }else{
            ans=a%mod;
            return ((ans%mod)*(helper(a,b-1)%mod))%mod;  
        }
}

void solution(){
   
   ll a, b;
   cin >> a >> b;
    

   cout << helper(a, b)  << "\n";
   
}

// Ignored by Online Judges
void setUp_ForLocalMachine(){

   // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   // if "input.txt" not exist : Create
   std::ifstream infile("input.txt");
   if(!infile.good()){
       ofstream MyFile("input.txt");
       MyFile << "3"; // writing example case
    }
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 }
 
 
 int main(){
    setUp_ForLocalMachine();

    solution();
    return 0;
 }