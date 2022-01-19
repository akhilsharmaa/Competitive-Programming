#include <iostream>
using namespace std;

// *Congratulations!

int main(){
    int size;
    cin >> size;
    int p[size+1];
    for(int i=1; i<=size; i++){
        int k;
        cin >> k;
        p[k]=i;
    }
    
    for(int i=1;i<=size;i++){
        cout << p[p[i]] << endl;
    }
    return 0;
}