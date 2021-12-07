
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solution(){
   
    int king_i, rook_1_i, rook_2_i;
    int king_j, rook_1_j, rook_2_j;

    cin >> king_i >> king_j; // King 
    cin >> rook_1_i >> rook_1_j; // Rook 1 
    cin >> rook_2_i >> rook_2_j; // Rook 2


    // In one row or col 
    if(king_i == rook_1_i == rook_2_i 
    || king_j == rook_1_j == rook_2_j){
        std::cout << "NO\n";  return;
    }   

    // CORNER king 
    if ( king_i == 1 && king_j == 1){ // Left - bottom 
        // Capture the rooks 
        if((rook_1_i <= 2 && rook_1_j <= 2)|| (rook_2_i <= 2 || rook_2_j <= 2)){
            std::cout << "NO\n";  return;
        }else if((rook_1_j == 2 && rook_2_j == 2) || (rook_1_i == 2 && rook_2_i == 2) ){
            std::cout << "NO\n";  return;
        }

    }else if(king_i == 8 && king_j == 1){ // Right - bottom         
        // Capture the rooks 
        if((rook_1_i <= 2 && rook_1_j >= 7)|| (rook_2_i <= 2 || rook_2_j >= 7)){
            std::cout << "NO\n";  return;
        }else if(rook_1_j != 2 ) {
            std::cout << "NO\n";  return;
        }else if( rook_2_j != 2) {
            std::cout << "NO\n";  return;
        }
 
    }else if(king_i == 8 && king_j == 8){ // Top - Right
        // Capture the rooks 
        if((rook_1_i >= 7 && rook_1_j >= 7)|| (rook_2_i >= 7 && rook_2_j >= 7)){
            std::cout << "NO\n";  return;
        }else if(rook_1_j != 2 && rook_2_j != 2){
            std::cout << "NO\n";  return;
        }


    }else if(king_i == 1 && king_j == 8){ // Top - Left
        // Capture the rooks 
        if((rook_1_i <= 2 && rook_1_j >= 7)|| (rook_2_i <= 2 && rook_2_j >= 7)){
            std::cout << "NO\n";  return;
        }else if(rook_1_i != 2 && rook_2_i != 2){
            std::cout << "NO\n";  return;
        }

    }




    // King is in Bottom
    // if(king_j== 1 && king_i != 1 &&  king_i != 8){
    if(king_j== 1){
    
        // Capture the ROOKS in Near of KING
        if((rook_1_j == 2 &&
           (rook_1_i == king_i || rook_1_i == king_i +1 || rook_1_i == king_i - 1 ))|| 
           (rook_2_j == 2 &&
           (rook_2_i == king_i || rook_2_i == king_i +1 || rook_2_i == king_i - 1 ))){
            std::cout << "NO\n";  return;
        }

        if(rook_1_i == rook_2_i  ){ 
            std::cout << "NO\n";  return;
        }

    }

    // King is in Right
    if(king_i == 8 ){
    // if(king_i == 8 && king_j != 1 && king_j != 8){
    
        // Capture the ROOKS in Near of KING
        if((rook_1_i == 7 &&
           (rook_1_j == king_j || rook_1_j == king_j +1 || rook_1_j == king_j - 1 ))|| 
           (rook_2_i == 7 &&
           (rook_2_j == king_j || rook_2_j == king_j +1 || rook_2_j == king_j - 1 ))){
            std::cout << "NO\n";  return;
        }

        if(rook_1_j == rook_2_j  ){
            std::cout << "NO\n";  return;
        }

    }


    // King is in Left
    if(king_i == 1 ){
    // if(king_i == 1 && king_j != 1 && king_j != 8){
    
        // Capture the ROOKS in Near of KING
        if((rook_1_i == 2 &&
           (rook_1_j == king_j || rook_1_j == king_j +1 || rook_1_j == king_j - 1 ))|| 
           (rook_2_i == 2 &&
           (rook_2_j == king_j || rook_2_j == king_j +1 || rook_2_j == king_j - 1 ))){
            std::cout << "NO\n";  return;
        }

        if(rook_1_j == rook_2_j  ){
            std::cout << "NO\n";  return;
        }

    }

    // King is in TOP
    if(king_j == 8 ){
    // if(king_j == 8 && king_i != 1 && king_i != 8){
    
        // Capture the ROOKS in Near of KING
        if((rook_1_i == 7 &&
           (rook_1_j == king_j || rook_1_j == king_j +1 || rook_1_j == king_j - 1 ))|| 
           (rook_2_i == 7 &&
           (rook_2_j == king_j || rook_2_j == king_j +1 || rook_2_j == king_j - 1 ))){
            std::cout << "NO\n";  return;
        }

        if(rook_1_j == rook_2_j  ){
            std::cout << "NO\n";  return;
        }

    }
    cout << "YES\n";
}
    

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
       MyFile << "3"; // writing example case
    }
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 }
 
 
 int main(){
   setUp_ForLocalMachine();
   int testCase;
   cin >> testCase;
   for(int _i = 0; _i < testCase; _i++){ 
       solution();
   }
   return 0;
 }