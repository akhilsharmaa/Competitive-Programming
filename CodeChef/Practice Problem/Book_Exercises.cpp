/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define MOD          100000009
#define printv(v)    for(auto&&i:v)cout<<i<<' ';

struct Book{
    string name;
    int n;

    Book(int exe, string bname){
        name = bname;
        n = exe;
    }
};

int main(){

    // Faster I/O
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0;
    cin >> t ;
    
    vector<pair<Book, int>> book;

    while(t--){

        int inp;
        cin >> inp;

        if(inp == -1){
            cout <<  book.back().second << " " << book.back().first.name << endl;
            book.pop_back();
        }else {

            string str; cin >> str;
            if(inp == 0)continue;

            if(book.empty() || book.back().first.n >= inp)
                book.push_back({Book(inp, str), 0});
            else {
                book.back().second += 1;
            }
        }   
    }

   return 0;
}

