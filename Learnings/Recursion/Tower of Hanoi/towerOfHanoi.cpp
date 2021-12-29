#include <bits/stdc++.h>
using namespace std;

void solve(int s,int d,int h,int n, int &count){
    count++;
   
    if(n == 1){
        cout << "move plate " << n << " from ( " << s << " to "<< d << " ) \n";
        return;
    }

    solve(s, h, d, n-1, count);
    cout << "move plate " << n << " from ( " << s << " to "<< d << " ) \n";

    solve(h, d, s, n-1, count);
}

int main(){
    

    int n = 4;
    int count = 0;
    int s = 1, h = 2, d = 3;

    solve(s, d, h, n, count);
    cout<<  "count = " << count ;

    return 0;
}