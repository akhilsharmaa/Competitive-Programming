#include <bits/stdc++.h>

using namespace std;
// Solved Accepted :) 


int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    int ans=0;
    for(int x=1;x<=100;x++){
        bool ok=true;
        for(int i=0;i<n;i++) if(x%a[i]!=0) ok=false;
        for(int i=0;i<m;i++) if(b[i]%x!=0) ok=false; 
        if(ok) ans++;
    }
    cout<<ans<<endl;
    return 0;
}