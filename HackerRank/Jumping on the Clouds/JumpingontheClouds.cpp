#include<bits/stdc++.h>
using namespace std;

// Congratulations!

int main(){
    
    int n,i,count=0;
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(i=0;i<n-1;i++){
        if(arr[i+2]==0){
            count++;
            i=i+1;
        }

        else count++;
    }

    cout << count << "\n";
    return 0;
}
         