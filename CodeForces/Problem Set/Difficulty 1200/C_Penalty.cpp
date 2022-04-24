/*
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool isEnd(int goal1, int goal2, int rem1, int rem2){
    if(goal1 > goal2 + rem2 ||  goal2 > goal1 + rem1  )
    return true;
    return false;
}

int evenTeam(string str){

    int goal_tEven= 0, leftBall_tEven = 5;
    int goal_tOdd = 0, leftBall_tOdd = 5;

    int ans = 0;
    for (int i = 0; i < 10; i++){

        if(isEnd(goal_tEven, goal_tOdd,     
                leftBall_tEven , leftBall_tOdd)){
            return ans;
        }

        if(str[i] == '?' || str[i] == '1')  
            goal_tEven++;
        leftBall_tEven--;
        i++ , ans++;
        
        if(isEnd(goal_tEven, goal_tOdd,     
                leftBall_tEven , leftBall_tOdd)){
            return ans;
        }

        // Second team
        if(str[i] == '1') goal_tOdd++;
        leftBall_tOdd--;
        ans++;
    }   

    return 10;
}

int oddTeam(string str){
    
    int goal_tEven= 0, leftBall_tEven = 5;
    int goal_tOdd = 0, leftBall_tOdd = 5;
    int ans = 0;

    for (int i = 0; i < 10; i++){

        if(isEnd(goal_tEven, goal_tOdd,     
                leftBall_tEven , leftBall_tOdd)){
            return ans;
        } 

        if(str[i] == '1') goal_tEven++;
        leftBall_tEven--;
        i++ , ans++;

        if(isEnd(goal_tEven, goal_tOdd,     
                leftBall_tEven , leftBall_tOdd)){
            return ans;
        } 

        // Second team
        if(str[i] == '?' || str[i] == '1') 
            goal_tOdd++;
        leftBall_tOdd--;
        
        ans++;
    }   

    return 10;
}

void solve(){

    string str;
    cin >> str;

    cout << min(evenTeam(str)
            , oddTeam(str)) << endl;
}

int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
