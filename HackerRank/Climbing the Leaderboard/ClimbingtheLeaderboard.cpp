#include<stack>
#include <bits/stdc++.h>


// ACCEPTED :) 
using namespace std;

void climbingLeaderboard(stack <long int> scores, vector <int> alice) {
    // Complete this function
    for(int i =0 ; i<alice.size() ; i++)
    {
        while(!scores.empty() && alice[i]>=scores.top()) scores.pop() ;
        cout<<scores.size()+1<<endl ;
    }

}

int main() {
    int n, temp;
    cin >> n;stack <long int>scores ;

    for(int scores_i = 0; scores_i < n; scores_i++){
       cin >> temp;
        if(scores.empty() || scores.top()!=temp)
            scores.push(temp) ;
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       cin >> alice[alice_i];
    }
    climbingLeaderboard(scores,alice) ;

    return 0;
}