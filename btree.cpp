

#include <iostream>

using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
class bst{
    node *root;
  public:
  
  
  bst(){
      root = NULL;
  }
  bool isempty(){
      return(root == NULL);
  }
void insert(int value);
void search(int value);
  
  void inOrderprint(node* ptr){
     
      if(ptr!=NULL){
     inOrderprint(ptr->left);
     cout<<ptr->data<<"\t";
     inOrderprint(ptr->right);
      }
  }
  void printvalues(){
      inOrderprint(root);
  }
};
void bst::insert(int value){
      node* newnode = new node; //create new node to store the current value
      node* currentparrent; // this is the node where the current value's node is going to place
      newnode->data = value;
      newnode->left = NULL;
      newnode->right = NULL;
      currentparrent = NULL;
      if(isempty()){
          root = newnode;
      }
      else{
          node* nodeptr;
          nodeptr = root;
          while(nodeptr!=NULL){
              currentparrent = nodeptr;// below conditions will check and update the currentparrent 
              if(value > nodeptr->data){
                  nodeptr = nodeptr->right;
              }
              else{
                  nodeptr= nodeptr->left;
              }
          }
          if(value<currentparrent->data){ // from here check whether the currentparrent data is less or greater from the new value and place it accordingly
              currentparrent->left = newnode;
          }
          else{
              currentparrent->right = newnode;
          }
      }
      
  }
void bst::search(int value){
  
}
int main()
{
    bst b;
    for(int i=1;i<=10;i++){
        b.insert(i);
    }
    b.printvalues();

    return 0;
}
