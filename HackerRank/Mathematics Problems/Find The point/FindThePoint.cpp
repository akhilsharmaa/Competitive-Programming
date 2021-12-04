#include <bits/stdc++.h>
using namespace std;

vector<int> findPoint(int px, int py, int qx, int qy) {
    
    vector<int> re;

    int rx = (2* qx )- px;
    int ry = (2*qy) - py;

    re.push_back(rx);
    re.push_back(ry);

    return re;
}

int main(){
    
   vector<int> re =  findPoint(1, 1, 2, 2);

    for (auto &&i : re){
        cout << i << " ";
    }
    

   return 0;
}