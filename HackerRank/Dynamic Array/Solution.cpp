#include <iostream>
#include <vector>
using namespace std;


vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int> seqList[n];
    int lastAns = 0;
    vector<int> res;
    for(int i=0;i<queries.size();i++) {
        int x = queries[i][1];
        int y = queries[i][2];
        int choose = queries[i][0]; 
        int pos = (x^lastAns)%n;
        if(choose == 1) {
                seqList[pos].push_back(y);
            }
            else if(choose == 2){
                int index = y%((int)seqList[pos].size());
                lastAns = seqList[pos][index];
                res.push_back(lastAns);
            }
    }
    return res;
}



int main(){

    


   return 0;
}