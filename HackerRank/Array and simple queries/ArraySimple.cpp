#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solution(){
   
   
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Query 
    for (int i = 0; i < q; i++){
        int o, r, l;
        cin >> o >> l >> r;
        
    /*  Modify the given array by removing elements 
        from i to j and adding them to the front. */
        if(o == 1){

            // Temp Array created 
            vector<int> temp_front(l);
            for(int k = 0; k < l; k++){
                temp_front.push_back(arr[k]);
            }

            int start = 0;
            for (int k = l-1; k < r; k++, start++){
                swap(arr[k], arr[start]);
            }
            

            // Print Temp Array: 
            // cout << "1 - "; 
            // for (int k = 0; k < l; k++){
            //     cout << temp[k];
            // }cout << "\n";
                        

        }else {

            // Temp Array created 
            vector<int> temp_end;
            for(int k2 = r; k2 < n; k2++){
                temp_end.push_back(arr[k2]);
            }

            // Shifting the elements in back 
            int end = n - l - 1;
            for (int k = l-1; k < r; k++, end++){
                arr[end] = arr[k];
            }
            

            // Print the Temp Arr
            cout << "temp_end : "; 
            for (int it = 0; it < temp_end.size(); it++){
                cout << temp_end[it] << " ";
            }cout << "| ";

        }


        // Print the Main Arr
        cout << "Main Arr : "; 
        for (int it = 0; it < n; it++){
            cout << arr[it] << " ";
        }cout << " \n";
        

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