#include <bits/stdc++.h>
using namespace std;


int mi=99999;
void push(stack<int> &s, int a){
    if (s.empty()){
        mi = a;
        s.push(a); // Your code goes here
    }
    else{
        int x = a;
        if (a < mi){
            x = 2 * a - mi;
            mi = a;
        }
        s.push(x);
    }
}
bool isFull(stack<int> &s, int n){
    if (s.size() == n)
        return true;
    else
        return false;
    // Your code goes here
}

bool isEmpty(stack<int> &s){
    if (s.empty())
        return true;
    else
        return false; // Your code goes here
}

int pop(stack<int> &s){
    int v = s.top();
    if (v >= mi)
        s.pop();
    else{
        int y = 2 * mi - v;
        s.pop();
        mi = v; // Your code goes here
    }
}

int getMin(stack<int> &s){
    return mi; // Your code goes here ==>O(1)  and O(1) TIME AND SPACE
}



  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main()
{

    stack<int> s;
    push(s, 12);
    push(s, 10);
    push(s, 11);
    push(s, 14);

    cout << getMin(s);

    return 0;
}