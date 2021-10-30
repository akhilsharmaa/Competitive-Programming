#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
string isBalanced(string s) {
    stack<char> st;
 
    for (int i= 0 ; i <s.length() ; i++ ){

        char& c = s[i];

        if ( c == '(' || c == '{' ||c ==  '['){
            st.push(c);
        }else{

            if ( st.empty() || abs(st.top() - c) > 2){
                return "NO";
            }else{
                st.pop();
            }
            
        }
        
    }

    if (st.size() == 0) return "YES";
    else return "NO";
}


int main(){


    cout<< isBalanced("{{[[(())]]}}");

   return 0;
}