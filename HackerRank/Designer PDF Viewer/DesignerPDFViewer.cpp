#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
int designerPdfViewer(vector<int> h, string word) {

    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'v', 'u', 'w', 'x', 'y', 'z'};


    int maximum = INT16_MIN;

    
    for (int i = 0; i < word.size(); i++){

        for (int j = 0; j < h.size(); j++){
            if(word[i] == alpha[j]){
                maximum = max(h[j] , maximum);
            }
        }

    }
    
    return maximum * word.size();
}

int main(){
    


    return 0;
}