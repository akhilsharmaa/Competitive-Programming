    #include <bits/stdc++.h>
    using namespace std;

    class Solution
    {
    public:

        bool helper(string s, int l, int r){

            while (l <= r){
                if(s[l] != s[r]){
                    return false;
                }
                l++, r--;
            }

            return true;      
        }

        bool validPalindrome(string s){

            int l = 0, r = s.size() - 1; 

            while (l <= r){
                if(s[l] != s[r]){
                    return helper(s, l+1, r) 
                        || helper(s, l, r-1);
                }
                l++, r--;
            }

            return true;
        }
    };

    int main()
    {

        string s;
        cin >> s;
        Solution sol;
        cout << sol.validPalindrome(s);

        return 0;
    }