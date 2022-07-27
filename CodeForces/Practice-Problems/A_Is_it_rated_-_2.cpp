#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string s="Is it rated?";
    while(getline(cin, s)) {
        cout << "NO\n";
    }
    return 0;
}