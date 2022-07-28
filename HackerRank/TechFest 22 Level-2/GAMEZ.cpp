#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

string DecimalToBinary(long long int num){
    string str;
    while(num){
       if(num & 1) str+='1';
       else str+='0';
       num>>=1; // Right Shift by 1 
    }   
    return str;
}

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}
 
 // Function to reverse a string
void reverseStr(string& str)
{
    int n = str.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main(){

   ll n, m, k;
   cin >> n >> m >> k;

   string str1, str2;
   cin >> str1 >> str2;

   ll num1 = binaryToDecimal(str1);
   ll num2 = binaryToDecimal(str2);

   while (k--){

       ll andOfAB = num1 & num2;
       num1 += andOfAB; 
       num2 += andOfAB; 

   }
    
   str1 = DecimalToBinary(num1); 
   str2 = DecimalToBinary(num2); 

   reverseStr(str1);
   reverseStr(str2);

   cout << str1 << "\n" << str2;

   return 0;
}