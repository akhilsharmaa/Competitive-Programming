#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

struct Node{
   public:
      int data;
      Node * next;
      Node(int val){
         data = val;
      }
};

void insertBack (Node *root, int val){
   Node* temp = root;
   while (temp ->next  != NULL)
      temp = temp->next;

   Node *newNode = new Node(val);
   temp -> next = newNode;
}


void print(Node *root){
   Node* temp = root;
   while (temp ->next  != NULL){
      cout << temp->data << " ";
      temp = temp->next;   
   }cout <<  temp->data << " " <<endl;
}


void solution(){
   
   int testCase;
   cin >> testCase;
   for(int _i = 0; _i < testCase; _i++){
      
      int allFriend, toDelete;
      cin >> allFriend >> toDelete; 

      int firstFriend;
      cin >> firstFriend;

      // Inserted all the friends in linked list :) 
      Node *root = new Node(firstFriend);
      for (int i = 1; i < allFriend; i++){
         int friendPopularity;
         cin >> friendPopularity;
         insertBack(root, friendPopularity);
      }
      

      // Algo to delete nodes 
      int deleted = 0;
      Node* temp = root -> next, *prev = root;

      //? First Case 
      if (prev->data < temp ->data){
         prev ->next = temp -> next;
         delete temp;
         deleted++;
         temp = temp->next;   
      }
      

      while (temp -> next != NULL && toDelete > deleted ){

         if ((temp -> data) < (temp -> next -> data)){
            Node *toDelete = temp;
            prev -> next = temp->next;
            delete toDelete;
            deleted++;
         }

         temp = temp->next;   
      }

      // cout <<  temp->data << " " <<endl;
            
      print(root);
   }
}

// Ignored by Online Judges
void setUp_ForLocalMachine(){

   // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   #ifndef ONLINE_JUDGE
   // if "input.txt" not exist : Create
   std::ifstream infile("input.txt");
   if(!infile.good()){
       ofstream MyFile("input.txt");
       MyFile << "3"; // writing example case
    }
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 }
 
 
 int main(){
   setUp_ForLocalMachine();
   solution();
   
   return 0;
 }