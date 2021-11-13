#include <bits/stdc++.h>
using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

    stack<int> s1, s2 ,s3 ;
    int s1Height = 0, s2Height = 0, s3Height = 0;

    for (int i = h1.size()-1; i >= 0; i--){
        s1Height += h1[i];
        s1.push(s1Height);
    }
    for (int i = h2.size()-1; i >= 0; i--){
        s2Height += h2[i];
        s2.push(s2Height);
    }
    for (int i = h3.size()-1; i >= 0; i--){
        s3Height += h3[i];
        s3.push(s3Height);
    }

    while (1){
        if (s1.empty() || s1.empty() || s3.empty()) return 0;

        s1Height = s1.top();
        s2Height = s2.top();
        s3Height = s3.top();
         
        if (s1Height == s2Height && s2Height ==  s3Height)
            return s1Height;

        if (s1Height >= s2Height && s1Height >= s3Height ){
            s1.pop();
        }else if (s2Height >= s1Height && s2Height>= s3Height ){
            s2.pop();
        }else s3.pop();
    }

    return 0;
}


int main(){

    vector<int> h1 = {3, 2, 1, 1, 1};
    vector<int> h2 = {4, 3, 2};
    vector<int> h3 = {1, 1, 4, 1};

    cout<< equalStacks(h1 , h2, h3)<<endl;

   return 0;
}