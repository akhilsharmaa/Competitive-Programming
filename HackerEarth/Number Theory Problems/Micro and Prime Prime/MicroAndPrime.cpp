#include <bits/stdc++.h>
typedef unsigned long long int ll;

using namespace std;

ll maxSize = 1000000;
bool arr[1000001];

void sieve(){

    for (int i = 0; i < maxSize; i++){
        arr[i] = 1;
    }
    
    arr[0] = arr[1] = 0;

    for (ll i = 2; i * i < maxSize; i++){
        if(arr[i] == 1){
            for (int j = i * i ; j < maxSize; j+= i){
                arr[j] =0;
            }
            
        }
    }

}

void solution(){

    unsigned  L, R;
    cin >> L >> R;
     
    sieve();
    
    ll result  = 0;
    for (ll i = L; i < R; i++){
        if(arr[i] == 0) result++;
    }

    cout <<  result << "\n";
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