#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int g;
    cin >> g;    
    for(int a0 = 0; a0 < g; a0++){
        int n, m, maxSum;
        cin >> n >> m >> maxSum;
        vector<int> a(n);
        vector<int> b(m);
        
        for(int a_i = 0; a_i <n; a_i++){ cin >> a[a_i];}
        for(int b_i =0; b_i <m; b_i++){ cin >> b[b_i];}
        
        int sum=0,count=0,temp=0,i=0,j=0;        
        
        while(i<n && sum+a[i]<=maxSum){    //considering only first stack and calculating count
            sum+=a[i++];
        }
        
        count=i;
       
        while(j<m && i>=0){          //now adding one element of second stack at a time and subtracting the top element of first stack and calculating the count   
            sum+=b[j++];      
            while(sum>maxSum && i>0){
                i--;
                sum-= a[i];
            }
            if(sum<=maxSum && i+j>count)
                count=i+j;
        }
        cout<<count<<endl;
    } 
    return 0;
}