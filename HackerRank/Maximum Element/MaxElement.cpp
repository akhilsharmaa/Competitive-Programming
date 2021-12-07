#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
stack<int> mainStack; 
stack<int> maxStack; 

//ACCEPTED :)  SCORED : 20

void pushElement(int x){
    mainStack.push(x);

    if(maxStack.empty()){
        maxStack.push(x);
        return;
    }

    if(mainStack.top() > maxStack.top()){
        maxStack.push(x);
    }else {
        maxStack.push( maxStack.top());
    }

}

void deleteElement(){
    
    if(!mainStack.empty()){
       mainStack.pop();
    }

    if(!maxStack.empty()){
        maxStack.pop();
    }

}

void solution(){

   
   ll operation;
   cin >> operation;
   
    if(operation == 1){
        int x;
        cin >> x;
        pushElement(x);
        // cout << "pushed: " << x << " | ";
    }  // Push the element x into the stack.

    else if(operation == 2){
        deleteElement();
        // cout << "deleted: " ;
    } // Delete the element present at the top of the stack.
    
    else if(operation == 3){
        if(!maxStack.empty()){
            cout <<  maxStack.top() << endl;
        }
    }

    // cout << endl;
}


// Ignored by Online Judges
void setUp_ForLocalMachine(){

   // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   // if "input.txt" not exist : Create
   std::ifstream infile("input.txt");
   if(!infile.good()){
       ofstream MyFile("input.txt");
       MyFile << "3"; // writing example case
    }
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 }
 
 
 int main(){
//    setUp_ForLocalMachine();

   ll testCase;
   cin >> testCase;
   for(ll _i = 0; _i < testCase; _i++){
    //    cout << "t = " << _i << " | ";
        solution();
   }

   return 0;
 }
