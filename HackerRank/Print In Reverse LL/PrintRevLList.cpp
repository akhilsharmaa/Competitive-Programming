#include <iostream>
#include <vector>
using namespace std;

class SinglyLinkedListNode {
    public:
    int data;
    SinglyLinkedListNode* next;
};

void reversePrint(SinglyLinkedListNode* llist) {

    // Temprory Node 
    SinglyLinkedListNode *temp = llist;
    vector<int> arr; 

    while (temp != NULL){
        arr.push_back(temp->data);
        temp  = temp->next;
    } 

    for (int i = arr.size() - 1 ; i >= 0; i--){
        cout<< arr[i] << endl;
    }
}

int main(){

    


   return 0;
}