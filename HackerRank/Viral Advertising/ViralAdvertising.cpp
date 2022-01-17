#include <bits/stdc++.h>
using namespace std;

// FuLLY ACCEPTED & :)

int main() {
    int n;
    cin>>n;
    
    int m = 5;
    int total;
    for(int i=0; i<n; ++i){
        m = m/2;
        total += m;
        m *= 3;
    }
    
    cout<<total<<endl;
    return 0;
}