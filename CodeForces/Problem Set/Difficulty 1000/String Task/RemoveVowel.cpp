#include <bits/stdc++.h>
using namespace std;


// ACCEPTED :) 
int main()
{
    string s, s2;
    cin >> s;
    int x = s.length();
    for(int i = 0; i<x; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
        ||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||
        s[i]=='U'||s[i]=='Y')
        {
            continue;
        }
        else
        {
            s2 += '.';
            s2 += towlower(s[i]);
        }
    }
    cout<<s2<<endl;
}