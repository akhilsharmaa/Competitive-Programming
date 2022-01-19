#include <bits/stdc++.h>
using namespace std;

// user-defined
#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

void solution(){
    
    int d1, m1, y1;
    int d2, m2, y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    if (y1 > y2){ 
        printf("10000");
    }else{
        if (y1 < y2){
            printf("0");
        }else{
            if (m1 > m2){
                printf("%d", (m1-m2)*500);
            }else{
                if (m1 < m2){
                    printf("0");
                }else{
                    if (d1 > d2){
                        printf("%d", (d1-d2)*15);
                    }else printf("0");   
                }   
            }   
        }
    }
}

int main(){

    solution();
    
    return 0;
}