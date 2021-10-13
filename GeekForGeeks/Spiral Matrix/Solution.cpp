#include <iostream>
#include <vector>
using namespace std;

// NOT ACCEPTED :) 
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k){
        
        int dir = 0;
        int top_ptr = 0, down_ptr = a[0].size() -1;
        int left_ptr= 0, right_ptr = a.size()-1;

        int k_count = 0;

        cout<< "Output => " << endl;
        
        while (k_count <= k){
            
            if (dir== 0){       // Traversing LEFT -> RIGHT 
                for (int i= left_ptr; i <= right_ptr; i++){
                    cout << a[left_ptr][i]<< ", " ;


                    k_count++;
                    if (k == k_count){return a[left_ptr][i]; break;}
                } 

                dir += 1;
                top_ptr ++;
            }else if(dir == 1){ //  Traversing  TOP -> DOWN

                for (int i = top_ptr; i <= down_ptr; i++){
                    cout << a[i][right_ptr]<< ", ";

                    k_count++;
                    if (k == k_count){return a[i][right_ptr]; break;}
                }

                dir = 2;
                right_ptr--;
            }else if(dir == 2){ //  Traversing  Left <- Right

                for (int i = right_ptr; i >= left_ptr; i--){
                    cout << a[down_ptr][i]<< ", " ;

                    k_count++;
                    if (k == k_count){ return a[down_ptr][i]; break;}
                }
                //  cout<< endl ;

                // cout<< "dir = "<< dir << endl ;
                dir = 3;
                down_ptr--;
            }else if(dir == 3){ //  Traversing  TOP <- DOWN

                for (int i = down_ptr; i >= top_ptr; i--){
                    cout << a[i][left_ptr]<< ", " ;

                    if (k == k_count){ return a[i][left_ptr]; break; }
                    k_count++;
                } 

                dir=(dir+1)%4;
                left_ptr++;
            }
        }
        
        return 0;
    }


    vector<int> spiralOrder(const vector<vector<int> > &A) {
    
    int T,B,L,R,dir;
    T=0;
    B=A.size()-1;
    L=0;
    R=A[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
    
    while(T<=B && L<=R)
    {
        if(dir==0){
            for(i=L;i<=R;i++)
                ans.push_back(A[T][i]);
            T++;
        }
        else if(dir==1){
            for(i=T;i<=B;i++)
                ans.push_back(A[i][R]);
            R--;
        }
        else if(dir==2){
            for(i=R;i>=L;i--)
                ans.push_back(A[B][i]);
            B--;
        }
        else if(dir==3){
            for(i=B;i>=T;i--)
                ans.push_back(A[i][L]);
            L++;
        }
        dir=(dir+1)%4;
    }
    return ans;
}

};

int main(){

    // cout<< "Dsfasdf" ;
    Solution s;
    // vector<vector<int>> a  = {{1,  2,  3,  4}, 
    //                           {12, 13, 14, 5},
    //                           {11, 16, 15, 6},
    //                           {10,  9,  8, 7}};

    vector<vector<int>> a = {{1, 2, 3}, 
       {4, 5, 6}, 
       {7, 8, 9}};

    cout<< "Expected => 1,  2,  3,  4, 5, 6, 7,  8, " <<endl;

    cout<< s.findK(a, a.size(), a[0].size(), 4);
    // vector<int> r = s.spiralOrder(a);
    // for (auto &&i : r){
    //     cout << i << ", " ;
    // }
    

    return 0;
}