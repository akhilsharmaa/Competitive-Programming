#include <bits/stdc++.h>
using namespace std;


/*  Print the pattern  
    # # # # # 
    # # # # 
    # # # 
    # # 
    # 
*/

void pattern1(int n, int i){
    if (n > i){
        cout << "# "; 
        pattern1(n, i + 1);
    }else{
        cout<<endl;
        pattern1(n - 1, 0);
    }
}


/*  Print the pattern 2  
    # 
    # # 
    # # # 
    # # # # 
    # # # # # 
*/

void pattern2(int n, int i){
    if (n > i){
        pattern2(n, i + 1);
        cout << "# ";
    }else{
        cout<<endl;
        pattern2(n - 1, i + 1);
    }
}

 
int main(){
   
   pattern2(6, 0);

   return 0;
}