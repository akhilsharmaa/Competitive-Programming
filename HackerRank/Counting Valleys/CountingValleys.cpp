#include<bits/stdc++.h>
using namespace std;

// Solved Accepted :) 
int main()
{
    int l,c=0,sea=0;
    string a;
    cin>>l;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='D'){
            sea--;
        }
        else if(a[i]=='U'){
            sea++;
        }
        if(a[i]=='U' && sea==0){
            c++;
        }
    }
    cout<<c<<endl;
}
