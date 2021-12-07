#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
stack<int> mainStack; 
stack<int> maxStack; 

//ACCPETed : 5 testcase fail :( out of 28 testcase 


void pushElement(int x){
    mainStack.push(x);

    if(maxStack.empty()){
        maxStack.push(x);
        return;
    }

    if(x > maxStack.top()){
        maxStack.push(x);
    }

}

void deleteElement(){
    
    
    if(mainStack.size() == 0){
        return;
    }

    
    if(mainStack.top() == maxStack.top()){
        mainStack.pop();
        maxStack.pop();
    }else {
        mainStack.pop();
    }
}

void solution(){

   
   int operation;
   cin >> operation;
   
    if(operation == 1){
        int x;
        cin >> x;
        pushElement(x);
    }  // Push the element x into the stack.

    else if(operation == 2){
        deleteElement();
    } // Delete the element present at the top of the stack.
    
    else if(operation == 3){
      cout <<  maxStack.top() << endl;
    }

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

   int testCase;
   cin >> testCase;
   for(int _i = 0; _i < testCase; _i++){
        solution();
   }

   return 0;
 }
