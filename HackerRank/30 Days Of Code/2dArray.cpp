#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }
    
    int maxSum = INT_MIN;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){

            int sum = arr[i][j]  +      arr[i][j +1]    +  arr[i][ j + 2]
                        +               arr[i + 1][j+1]            + 
                      arr[i + 2][j] +   arr[i + 2][j+1] +   arr[i + 2][j+2] ;  

            maxSum = max(maxSum, sum);
        }
    }
    
    cout << maxSum << endl;



    return 0;
}