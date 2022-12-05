const int N = 1000;

int parent[N+1];
int sizeG[N+1];

void make(int v){
    parent[v] = v;
    sizeG[v] = 1;
}

int find(int v){
    if(parent[v] == v)return v;
    return parent[v] = find(parent[v]);;
}

void Union(int a, int b){
    
    a = find(a);
    b = find(a);
    
    if(a != b){
        if(sizeG[a] > sizeG[b])
            swap(a, b);
             
        parent[a] = b;
        sizeG[a] += sizeG[b];
    }
}