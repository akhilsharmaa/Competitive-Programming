#include <iostream>
using namespace std;

// 281A - Word Capitalization ACCEPTED :) 

int main(){

    string str;
   cin >> str;

    str[0] = toupper(str[0]);
    cout << str;

   return 0;
}