#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

// ACCEPTED :) 
void SortedStack :: sort(){
    
    int arr[s.size()]; 
    int size = s.size(); // Size of stack 

    // Storing In Temp Array
    for (int i = 0; i < size; i++){
        arr[i] = s.top();
        s.pop();
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + n); // sorting the array

    // Re-Inserting In the Stack 
    for (int i = 0; i < size ; i++){
        s.push(arr[i]);
    }
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

int main(){

    SortedStack sorted;
    sorted.s.push(9);
    sorted.s.push(7);
    sorted.s.push(10);
    sorted.s.push(13);
    sorted.s.push(12);
    sorted.s.push(131);
    sorted.s.push(1);
    sorted.sort();


   return 0;
}