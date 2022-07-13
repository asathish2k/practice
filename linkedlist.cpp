

#include <iostream>

using namespace std;
struct node{
    int data;
    struct node* next;
};

class ll{
    public:
    node *head;
    ll(){
        head =NULL;
        
    }
    void insert(int data);
    void print(){
        node *ptr;
         ptr = head;
        
        while(ptr!=NULL){
            cout<<ptr->data<<"\t";
          ptr=  ptr->next;
        }
    }
    void remove(int data);
    
};
void ll::insert(int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    
}
int main()
{
   ll l;
   l.insert(10);
   l.insert(30);
   l.insert(5);
   l.print();

    return 0;
}
