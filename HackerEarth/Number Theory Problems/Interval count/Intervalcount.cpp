#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

void solution(){

    unsigned  N, L, R;
    cin >> N >> L >> R;

    ll arrSize = (R-L) + 1;
    ll arr[arrSize];

    // Initialize all numbers 
    ll start = L;
    for (int i = 0; i < arrSize; i++){
        arr[i] = L++;
    }
    

    while (N--){

        unsigned long long primeNum;
        cin >> primeNum;
        

        for (ll j = 0; j * j < arrSize; j ++){
            if(arr[j] % primeNum == 0){
                arr[j] = -1;
            }
        }

    }

    ll result = 0;
    for (ll i = 0; i < arrSize; i++){
        if(arr[i] == -1) result++;
        // cout << arr[i] << " ";
    }

    cout << result<< "\n";
}

// Ignored by Online Judges
void setUp_ForLocalMachine()
{

    // For Faster Output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    // if "input.txt" not exist : Create
    std::ifstream infile("input.txt");
    if (!infile.good())
    {
        ofstream MyFile("input.txt");
        MyFile << "3"; // writing example case
    }
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    setUp_ForLocalMachine();

    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        solution();
    }
    return 0;
}