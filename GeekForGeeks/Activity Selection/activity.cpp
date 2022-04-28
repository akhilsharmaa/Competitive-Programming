/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n){

        vector<pair<int, int>>ans;
        for(int i=0;i<n;i++){
            ans.push_back({start[i],end[i]});
        }

        sort(ans.begin(), ans.end(), [](auto &left, auto &right) {
            return left.second < right.second;
        });

        int cnt = 1, j = 1, i = 0; 
        while (j < n){
            if(ans[i].second < ans[j].first){
                cnt++;
                i = j;
            }
            
            j++;
        }

        return cnt;   
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends