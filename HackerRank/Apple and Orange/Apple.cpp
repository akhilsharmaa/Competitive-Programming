#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
int main(){

	int s,t,a,b,m,n,x;
	int aa,bb;
	aa = bb = 0;

	cin >> s >> t >> a >> b >> m >> n;
	while(m--){
		cin >> x;
		if(s <= a+x && a+x <= t) aa++;
	}

	while(n--){
		cin >> x;
		if(s <= b+x && b+x <= t) bb++;
	}

	cout << aa << "\n" << bb;

	return 0;
}
