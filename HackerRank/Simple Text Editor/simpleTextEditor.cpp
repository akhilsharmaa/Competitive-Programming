#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// ACCEPTED :) 
void solution(){
    
    int Q;
    cin >> Q;
    
    stack<string> st;

    while(Q--){
        
        int o,k;
        cin >> o;
        string toAppend, word; 


        switch (o){
        case 1: // APPEND 
             
            cin >> toAppend;
            if(st.empty()){
                st.push(toAppend);
            }else {
                st.push(st.top() + toAppend);
            }

            toAppend = ""; 

            break;
        case 2: // Delete the last K letters
            cin >> k;
            toAppend = ""; 

            word = st.top();
            for (int i = 0; i < word.size() - k; i++){
               toAppend += word[i];
            }

            st.push(toAppend);

            break;
        case 3: // Print the Kth letter 
            
            cin >> k;
            word = st.top();

            cout << word[k - 1] << "\n";

            break;
        case 4: // Undo last Operation 

            st.pop();

            break;
        default: 
            break;
        }

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
    setUp_ForLocalMachine();

    solution();

    return 0;
 }