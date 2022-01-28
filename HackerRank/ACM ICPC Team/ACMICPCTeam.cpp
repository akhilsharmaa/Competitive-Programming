#include <bits/stdc++.h>
using namespace std;

// You have earned 25.00 points!

int count_(string a, string b){
    
    int cnt = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '1' || b[i] == '1'){
            cnt++;
        }
    }
    
    return cnt;
}

vector<int> acmTeam(vector<string> topic) {
        
        int maxi = 0, ans = 0;
        int n = topic.size();
        for(int i = 0; i < n; i++)
            for(int j = i; j < n; j++){
            
            int cnt = count_(topic[i], topic[j]);
            if(maxi < cnt){
                maxi = cnt;
                ans = 1;
            }else if(maxi == cnt)
                ans++;
        }
        
        
        return {maxi, ans};
}


int main(){

   

   return 0;
}