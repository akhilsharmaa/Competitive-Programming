#include <bits/stdc++.h>
using namespace std;

int n;
using namespace std;
map<pair<int,int>,int> q;

// You have earned 30.00 points!

int dl(int i1,int i2){
    int ret=0;
    while(i1<n && i2>1){
        i1++;i2--;
        if(q[{i1,i2}]) break;
        ret++;
    } return ret;
}


int up(int i1,int i2){
    int ret=0;
    while(i1>1){
        i1--;
        if(q[{i1,i2}]) break;
        ret++;
    }
    return ret;
}

int dw(int i1,int i2){
    int ret=0;
    while(i1<n){
        i1++;
        if(q[{i1,i2}]) break;
        ret++;
    }
    return ret;
}

int lf(int i1,int i2){
    int ret=0;
    while(i2>1){
        i2--;
        if(q[{i1,i2}]) break;
        ret++;
    }
    return ret;
}

int rg(int i1,int i2){
    int ret=0;
    while(i2<n){
        i2++;
        if(q[{i1,i2}]) break;
        ret++;
    }
    return ret;
}

int ur(int i1,int i2){
    int ret=0;
    while(i1>1 && i2<n){
        i1--;
        i2++;
        if(q[{i1,i2}]) break;
        ret++;
    }
    return ret;
}

int ul(int i1,int i2){
    int ret=0;
    while(i1>1 && i2>1){
        i1--;
        i2--;
        if(q[{i1,i2}]) break;
        ret++;
    }
    return ret;
}

int dr(int i1,int i2){
    int ret=0;
    while(i1<n && i2<n){
        i1++;
        i2++;
        if(q[{i1,i2}]) break;
        ret++;
    }
    return ret;
}


int main(){

    int k;
    cin >> n >> k;
    int f;
    int g;
    cin >> f >> g;
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        q[{rObstacle,cObstacle}]=1;
    }
    
    cout<<up(f,g)+dw(f,g)+lf(f,g)+rg(f,g)+ur(f,g)+ul(f,g)+dl(f,g)+dr(f,g);
    return 0;
}