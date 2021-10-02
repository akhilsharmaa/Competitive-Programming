#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = "";

        for (int i = 1; i < strs.size(); i++){
            
            for (int j = 0; j < strs[i].size(); j++){
                
                if (strs[i][j] == strs[i - 1][j]){
                    prefix = prefix + "" +  strs[i];
                }else{
                    break;
                }
            }
        }

        return prefix;
    }
};

int main(){

    vector<string> a = { "flower","flow","flight"};
    if (1)
    {
        
    }else{

    }
    

    Solution s;
    cout<< s.longestCommonPrefix(a) << endl;

    return 0;
}