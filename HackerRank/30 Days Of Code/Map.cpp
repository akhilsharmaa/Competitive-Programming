#include <bits/stdc++.h>
using namespace std;

//  accepted :) 
int main(){
    
    int t;
    cin >> t;
    
    map<string, string> mp;
    
    while(t--){
        string name , number; 
        cin >> name >> number ;
        mp[name] = number;
    }


    std::map<string,string>::iterator it;
    string query;
    while( cin >> query ){
        it = mp.find(query);
        
        if ( it != mp.end() ){ // key is found in phoneBook    
            cout << it->first << "=" << it->second << '\n';
        }
        else{ // the iterator hit the end of the phone book without finding key
            cout << "Not found" << '\n';
        }
    }

   return 0;
}