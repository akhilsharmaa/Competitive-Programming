#include <bits/stdc++.h>
using namespace std;

// You have earned 20.00 points!
long repeatedString(string s, long n) {
  
    long long count=0;
    for (int i=0;i<s.size();i++) if (s[i]=='a')
        count++;
    
    count*=n/s.size();

    for (int i=0;i<n%s.size();i++) if (s[i]=='a') 
        count++;
            
    return count; 
}

int main(){
    
    cout << repeatedString("aba", 10);

    return 0;
}