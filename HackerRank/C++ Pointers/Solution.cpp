#include <stdio.h>

void update(int *a,int *b) {

    int aPlusB = *a + *b;
    printf("%d\n", aPlusB);


    int aMinusB = *a - *b;

    if (aMinusB < 0){
        aMinusB *= -1;
    }

    printf("%d\n", aMinusB);
    

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);

    return 0;
}