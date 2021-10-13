// { Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


 // } Driver Code Ends

// The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


class Solution{
    int minEle;
    stack<int> s;
    stack<int> temp;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           return temp.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
            
            int toReturn = s.top();
            if(temp.top() == s.top()) {temp.pop();}
            s.pop();
            return toReturn;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           if(temp.empty() || temp.top() > x){
                temp.push(x);
            }

            s.push(x);
       }
};

// { Driver Code Starts.

int main(){

    Solution sol;
    sol.push(2);
    sol.push(3);
    sol.pop();
    cout<< sol.getMin() << endl;
    sol.push(1);
    cout<< sol.getMin() << endl;


    // cout << sol.getMin() << ", " << sol.pop();

}