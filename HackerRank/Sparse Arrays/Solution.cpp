#include <iostream>
#include <vector>
using namespace std;

// ACCEPTED :) 
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    vector<int> result; 

    for (int i = 0; i < queries.size(); i++){
        
        int count = 0;
        for (int j = 0; j < strings.size(); j++){
            if (queries[i] == strings[j]){
                count++;
            }
        }
        result.push_back(count);

        cout << count <<endl;
    }
    
    return  result;
}   


int main(){
    
    vector<string> strings = {"ab", "ab", "abc"};
    vector<string> queries = {"ab", "abc", "bc"};
    vector<int> r =  matchingStrings(strings, queries);

    cout<< "Returned Value = ";
    
    for (int i = 0; i < r.size(); i++)
    {
        cout<< r[i]<< " ";
    }cout<< endl;
    

   return 0;
}