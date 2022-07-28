#include <iostream>
using namespace std;


class Solution{
public:	
	void immediateSmaller(int *arr, int n) {

        for(int i =0;i<n-1;i++){
            if(arr[i]>arr[i+1])
                arr[i]=arr[i+1];
            else
                arr[i]=-1;
        }
        arr[n-1]=-1;
	}

};


  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main(){

    Solution s;
    int a[] = {4, 2, 1, 5, 3};
    s.immediateSmaller(a, 5);
    return 0;
}