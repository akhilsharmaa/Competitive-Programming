#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string minute(int n){

    string m_str;
    switch (n){
        case 1: m_str = "one minute"; break;
        case 2: m_str = "two minutes"; break;
        case 3: m_str = "three minutes"; break;
        case 4: m_str = "four minutes"; break;
        case 5: m_str = "five minutes"; break;
        case 6: m_str = "six minutes"; break;
        case 7: m_str = "seven minutes"; break;
        case 8: m_str = "eight minutes"; break;
        case 9: m_str = "nine minutes"; break;
        case 10: m_str = "ten minutes"; break;
        case 11: m_str = "eleven minutes"; break;
        case 12: m_str = "twelve minutes"; break;
        case 13: m_str = "thirteen minutes"; break;
        case 14: m_str = "fourteen minutes"; break;
        case 15: m_str = "quarter"; break;
        case 16: m_str = "sixteen minutes"; break;
        case 17: m_str = "seventeen minutes"; break;
        case 18: m_str = "eighteen minutes"; break;
        case 19: m_str = "nineteen minutes"; break;
        case 20: m_str = "twenty minutes"; break;
        case 21: m_str = "twenty one minutes"; break;
        case 22: m_str = "twenty two minutes"; break;
        case 23: m_str = "twenty three minutes"; break;
        case 24: m_str = "twenty four minutes"; break;
        case 25: m_str = "twenty five minutes"; break;
        case 26: m_str = "twenty six minutes"; break;
        case 27: m_str = "twenty seven minutes"; break;
        case 28: m_str = "twenty eight minutes"; break;
        case 29: m_str = "twenty nine minutes"; break;
        case 30: m_str = "half"; break;
        default:
       break;   
    } 

   return m_str;
}

string hour(int h){
    
   string h_str;

   switch (h){
        case 1: h_str = "one"; break;
        case 2: h_str = "two"; break;
        case 3: h_str = "three"; break;
        case 4: h_str = "four"; break;
        case 5: h_str = "five"; break;
        case 6: h_str = "six"; break;
        case 7: h_str = "seven"; break;
        case 8: h_str = "eight"; break;
        case 9: h_str = "nine"; break;
        case 10: h_str = "ten"; break;
        case 11: h_str = "eleven"; break;
        case 12: h_str = "twelve"; break;
    default:
       break;
   } 

    return h_str;
}

int main(){

   int h, m;
   cin >> h >> m;

    string h_str = hour(h);


    if(m == 0){

        cout << hour(h) <<  " o' clock";

    }else if(m <= 30){

        cout << minute(m)
        << " past " 
        << hour(h) << endl;

    }else{

        cout << minute(60 - m)
        << " to " 
        << hour(h + 1) << endl;

    }



   return 0;
}