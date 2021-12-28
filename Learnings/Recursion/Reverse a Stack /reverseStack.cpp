#include <bits/stdc++.h>
using namespace std;

stack<int> st2;

void reverseStack(stack<int> &st){

    if(st.size() == 0){
        return;
    }

    int temp = st.top();
    st.pop();
    st2.push(temp);

    reverseStack(st);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    int n = st2.size();
    
    cout << "Inverse : ";
    while (n--){
        cout << st2.top() << " ";
        st2.pop();
    }cout << "\n";
    


    return 0;
}