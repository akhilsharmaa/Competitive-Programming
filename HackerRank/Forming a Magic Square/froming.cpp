/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

void solve(){
    
    int a[3][3];
    cin >> a[0][0] >> a[0][1] >> a[0][2];
    cin >> a[1][0] >> a[1][1] >> a[1][2];
    cin >> a[2][0] >> a[2][1] >> a[2][2];

    int squares[8][3][3] = {
		{{8,1,6}, {3,5,7}, {4,9,2}},
		{{4,3,8}, {9,5,1}, {2,7,6}},
		{{2,9,4}, {7,5,3}, {6,1,8}},
		{{6,7,2}, {1,5,9}, {8,3,4}},
		{{6,1,8}, {7,5,3}, {2,9,4}},
		{{8,3,4}, {1,5,9}, {6,7,2}},
		{{4,9,2}, {3,5,7}, {8,1,6}},
		{{2,7,6}, {9,5,1}, {4,3,8}}
	};

    int mini = INT_MAX;
    for (int i = 0; i < 8; i++){

        int temp = 0;
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                temp += abs(a[j][k] - squares[i][j][k]);
            }  
        }

        mini = min(mini , temp);
    }
    
    cout << mini << endl;
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);
       solve();
   

   return 0;
}

