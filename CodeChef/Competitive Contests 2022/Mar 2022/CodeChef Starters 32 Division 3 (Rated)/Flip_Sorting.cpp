/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

void solve()
{

        int n;
		cin>>n;
		string s;
		cin>>s;
		vector<vector<int>>v;
		for(int i=n-1;i>=0;i--){
			if(s[i]=='0'){
				int z=i+1;
				for(int j=0;j<=i;j++){
					if(s[j]=='1'){
						s[j]='0';
					}
					else{
						s[j]='1';
					}
				}
				v.push_back({1ll,z});
			}
		}
		int p=v.size();
		cout<<p<<endl;
		for(auto val:v){
			cout<<val[0]<<" "<<val[1]<<endl;
		}
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
    
    return 0;
}