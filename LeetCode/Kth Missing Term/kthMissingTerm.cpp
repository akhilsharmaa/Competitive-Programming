#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        // This is Accepted :)
        int count = 0;
        
        for(int i = 0; i < arr.size(); ++i){
            if(i == 0){
                //from 1 to arr[0]-1
                if(count + arr[0]-1 >= k){
                    return k;
                }
                count += arr[0]-1;
            }else{
                //from arr[i-1]+1 to arr[i]
                if(count + arr[i] - arr[i-1] - 1 >= k){
                    return arr[i-1] + (k - count);
                }
                count += arr[i] - arr[i-1] - 1;
            }
            // cout << i << " -> " << count << endl;
            
            // if(count >= k){
            //     return arr[i] + (count-k);
            // }
        }
        
        //count < k
        return arr.back() + (k-count);  

    }

    // This is not accepted :
    int findKthPositive2(vector<int>& arr, int k) {

        int arrIndex = 0;

        // TODO: Create a end of arr
        int endElementOfArr = arr.back();

        vector<int> missingArr; 

        cout<< endl ;
        for (int i = 0; i < endElementOfArr; i++){
            
            if(arr[arrIndex] == i){
                arrIndex++;
            }else{
                missingArr.push_back(i);
            }
        }

        // vector<int>::iterator ite;  //ite is a pointer 

        // cout<< "Print via iterator : " ; 
        // for (ite= missingArr.begin(); ite!= missingArr.end(); ite++){  
        //     cout<<*ite<<", ";
        // } cout<< endl;
    


        return missingArr[k]; 
    }
};


int main(){


    Solution s ; 
    vector<int> vectorToPass = {1, 3, 4, 10};

    cout << s.findKthPositive(vectorToPass, 2);


    // int arr[] = {1, 3, 4, 9};
    // int arrIndex = 0;
    // int arrLength = sizeof(arr)/sizeof(arr[0]);
    // int endElementOfArr = arr[arrLength - 1];

    // int missingArr[arrLength]; 
    // int missingArrIndex = 0;

    // cout<< endl ;
    // for (int i = 0; i < endElementOfArr; i++){
        
    //     if(arr[arrIndex] == i){
    //         arrIndex++;
    //     }else{
    //         missingArr[missingArrIndex] = i;
    //         missingArrIndex++;
    //     }
    // }
    


    // for (int i = 0; i < missingArrIndex; i++)
    // {
    //     cout << missingArr[i]<< " ";
    // }
    
    

    return 0;
}