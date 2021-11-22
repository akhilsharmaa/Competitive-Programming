#include <bits/stdc++.h>
using namespace std;


/*  Print the pattern  
    # # # # # 
    # # # # 
    # # # 
    # # 
    # 
*/

void pattern1TODO:(int n, int i){
    if (n > i){
        cout << "# "; 
        pattern1(n, i + 1);
    }else{
        cout<<endl;
        pattern1(n - 1, 0);
    }
}


int main(){
   
   pattern1(6, 0);

   return 0;
}