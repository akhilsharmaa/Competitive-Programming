#include <iostream>
#include <vector>
using namespace std;


// ACCEPTED :) 
vector<int> gradingStudents(vector<int> grades) {

    for (int i  = 0; i < grades.size(); i++){
        
        if (grades[i] < 38 || (grades[i] % 5) == 0){

            // cout<< "M of 5 = " << grades[i] << " ";

        }else{

            int rem = grades[i] % 5;
            // cout<< "rem of"<< grades[i] << "= "<<  rem << " " ;

            if (rem >= 3){
                grades[i] += (5 - rem);
            }   
            
        }
        
        cout<< grades[i] <<endl;

    }

    return  grades;   
}


int main(){

    vector<int> a = { 73, 67, 38, 33};
    gradingStudents(a);


   return 0;
}