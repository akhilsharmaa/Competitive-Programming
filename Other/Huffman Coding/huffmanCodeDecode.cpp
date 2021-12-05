#include <bits/stdc++.h>
using namespace std;

struct Node{

    char ch;
    int freq; 
    Node *left, *right;
};

Node* getNode(char ch, int freq, Node *left, Node  *right){
    Node *node = new Node();
    node->ch = ch;
    node->freq = freq;
    node->left = left;
    node->right = right;
}

struct comp{
    bool operator()(Node *l , Node* r){
        return l->freq > r->freq;
    }
};

void buildHuffmanTree(string text){

    unordered_map<char, int> freq;

    for(char ch: text){
        freq[ch]++;
    }

    priority_queue<Node *, vector<Node*>, comp> pq;

    for (auto &&pair : freq){
        
    }
}

int main(){
    
    string text = "Huffman coding is a data comperission algorithm";
    buildHuffmanTree(text);

   return 0;
}