#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

/* 
You have earned 25.00 points!
You are now 964 points away from the 6th star for your problem solving badge.*/

void solution(){
    
    // Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
    

    int count = 0;

    for (int j = 0; j < arr.size(); j++){
        
        int mn = INT_MAX;
        count = 0;

        for (auto &&i : arr){
            if(i > 0){
                mn = min(mn, i);
                count ++;
            }
        }

        if(count == 0){
            break;
        }
        
        cout << count << "\n";

        // After minimun
        for (auto &&i : arr){
            i = i - mn;
        }
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
    // setUp_ForLocalMachine();
    solution();
    
    return 0;
}