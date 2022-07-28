#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 100% 

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector


void solution(){
    
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        bool flag = false;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1' && (s[i+1]=='1' || s[i+1]=='0'))
            {
                flag = true;
                cout << "YES\n";
                break;
            }
        }
        if(flag == false) cout << "NO\n";
        
    }


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
        MyFile << "1"; // writing example case
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