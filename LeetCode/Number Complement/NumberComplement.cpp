/* ~ Akhilesh Sharma  */
#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fast cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
const ll MOD = 1e9 + 7;

/*
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number Complement.
    Memory Usage: 6.1 MB, less than 11.69% of C++ online submissions for Number Complement.
*/

class Solution {
public:

    // MSB - Most Significant Bit
    int msbFind(int num){
        int k = num;
        int msb = 0;
        for (int i = 1; i <= 32; i++){
            if(k&1)msb = i;
            k = k >> 1;
        }
        return msb;
    }

    int findComplement(int num) {

        int msb = msbFind(num);
        bitset<32> bs(num);

        for (int i = 0; i < msb; i++){
            if(num & 1) bs[i] = 0;
            else bs[i] = 1;
            num = num >> 1;
        }   
        
        return bs.to_ulong();
    }
};


/* ~ Akhilesh Sharma  */


int main(){
    
    fast // Fast-I/O 

    int num;
    cin>> num;

    Solution s;
    cout <<  s.findComplement(num);


    return 0;
}

