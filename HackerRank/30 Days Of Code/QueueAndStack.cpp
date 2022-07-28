#include <bits/stdc++.h>
using namespace std;

int main(){
    
    stack<char> st;
    queue<char> qu;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        st.push(s[i]);  
        qu.push(s[i]);
    }

    while (!st.empty() && !qu.empty()){

        if (st.top() != qu.front()){
            cout << "The word, " << s <<", is not a palindrome." <<endl;
            return 0;
        }

        st.pop();
        qu.pop();
    }
    
    cout << "The word, " << s << ", is a palindrome." <<endl;

    return 0;
}