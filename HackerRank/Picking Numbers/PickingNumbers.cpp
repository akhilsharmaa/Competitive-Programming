#include <bits/stdc++.h>

using namespace std;

// Accepted :) 

int main(){
    
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int max=0,c=0,ele,maxi=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        c=0;
        for(int j=i+1;j<n;j++){
            if(abs(a[i]-a[j])<=1){
                c++;
                if(c>maxi){
                maxi=c;
            }
            }
            else{c=0;
                break;
            }
        }
    }
    cout<<maxi+1<<endl;
}