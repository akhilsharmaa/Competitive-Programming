#include <bits/stdc++.h>
using namespace std;

// ACCEPTED & SOLVED :) 

// Ignored by Online Judges
void setUp_ForLocalMachine(){

    // For Faster Output
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    // if "input.txt" not exist : Create
    std::ifstream infile("input.txt");
    if(!infile.good()){
        ofstream MyFile("input.txt");
        MyFile << "1"; // writing example case
    }
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main(){
    // setUp_ForLocalMachine();

    int y;
    cin >> y;
    if(y<1918){
        if(y%4==0)cout<<"12.09."<<y<<endl;
        else cout<<"13.09."<<y<<endl;
    }
    else if(y==1918){
         cout<<"26.09."<<y<<endl;
    }
    else{
        
        if(y%400==0){
            cout<<"12.09."<<y<<endl;
        }
        else if(y%4==0&&y%100!=0){
            cout<<"12.09."<<y<<endl;
        }
        else cout<<"13.09."<<y<<endl;
    }
    
    return 0;
}