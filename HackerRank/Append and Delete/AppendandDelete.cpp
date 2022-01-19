#include <bits/stdc++.h>
using namespace std;

// Congratulations

string appendAndDelete(string s, string t, int k) {

    int n1 = s.size(),  n2 = t.size();
    int mn = min(n1 ,n2), matched = 0;

    int i = 0;
    
    while(s[i] == t[i]){

        i++;
    }
 
    int diff1 = n1 - i;
    int diff2 = n2 - i;

    if(diff1 + diff2 <= k){
        return "Yes";
    }
        return "No";

}


int main(){
    
    cout<< appendAndDelete("aba", "aba", 9);




    return 0;
}