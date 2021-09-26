#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
    
    string hour_string = hour_string = s[0] + s[1];
    int hour_int =  atoi("21");

    // if (s[7] == 'P'){
    //     hour_int += 12;
    // }
    
     string toReturn;  // = to_string(hour_int) + ":" + s[3] + s[4] + s[5] + s[6];

    cout<< toReturn ;
    return toReturn;
}

int main(){

    timeConversion("07:05:45PM");
   return 0;
}