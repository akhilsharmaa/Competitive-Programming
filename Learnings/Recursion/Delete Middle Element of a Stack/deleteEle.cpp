#include <bits/stdc++.h>
using namespace std;

void helper(stack<int> &st, int mid){

    if(mid == 1){
        st.pop();
        return;
    }

    int temp = st.top();
    st.pop();
    helper(st, mid - 1);

    st.push(temp);
}


void removeElement(stack<int> &st){

    int mid = (st.size() / 2) + 1;
    helper(st, mid);
}

int main(){

    stack<int> st;
   
    st.push(10);
    st.push(9);
    st.push(8);
    st.push(7);
    st.push(6);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    removeElement(st);
    
    int n = st.size();

    for (int i = 0; i < n ; i++){
        cout << st.top() << " ";
        st.pop();
    }
    

    return 0;
}