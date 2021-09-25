#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    
    int greatest;

    if (a > b){ 
        if (a > c){
            if (a > d){ greatest = a; }
            else{ greatest = d;}
        }
    }else{
        if (b > c){
            if (b  > d){
                greatest = b;
            }else{
                greatest = d;
            }

        }else{

            if (c > d){
                 greatest = c;   
            }
            

        }

    }
    
    return greatest;
}




int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}