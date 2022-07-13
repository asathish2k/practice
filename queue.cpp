#include <iostream>
using namespace std;

class queue{
public:

int size = 100;
int queuearray[100];
int front,rear = -1;

void enqueue(int val);
void dequeue();
void display();
void queuesize();


};
//Insert element at the end of the queue
void queue::enqueue(int val){
  if(rear >=size - 1){
    cout<<"Queue overflow"<<endl;
  }
  else{
    if(rear == -1)rear =0;
   queuearray[rear]=val;
    rear++;
    
   
    
    
  }
}
//Delete element at the begining of the queue
void queue::dequeue(){
  if(front == -1|| front>rear){
    cout<<"Queue underflow"<<endl;
  }
  else{
    cout<<"popped element:"<<queuearray[front]<<endl;
    front++;
    
   
  }
}
void queue::display(){
  if(front == -1 || front>rear){
    cout<<"Queue Underflow"<<endl;
  }
  else{
    for(int i=front;i<=rear-1;i++){
      cout<<queuearray[i]<<endl;
    }
  }
}
void queue::queuesize(){
  
  cout<<"Queue Size:"<<rear-front<<endl;
}
int main(){
  queue q;
  int choice;
  cout<<"\t\tQueue Operation"<<endl;
    cout<<"Available Options"<<endl;
    cout<<"1.enqueue\t2.dequeue\t3.display\t4.size\t5.exit"<<endl;
  do{
    
    cout<<"Enter the option:";
    
    cin>>choice;
    switch(choice){
      case 1:
        {
          int count;
          cout<<"Enter the no of elements to add in queue:";
          cin>>count;
          for(int i=0;i<count;i++){
            int val;
            cout<<"Enter element to insert:";
            cin>>val;
            q.enqueue(val);
          }
          break;
        }
      case 2:
        {
          q.dequeue();
          break;
        }
      case 3:
        {
          cout<<"Listing the elements"<<endl;
          q.display();
          break;
        }
      case 4:
        {
          q.queuesize();
          break;
        }
    }
  }while(choice!=5);
  return 0;
}
