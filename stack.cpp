#include <iostream>

using namespace std;

class stack{
public:
 int stackArray[100];
  int size = 100;
  int top = -1;
void push(int val);
void pop();
void display();
void stacksize();
};
void stack::push(int val){
  if(top>=size-1){
    cout<<"Stack overflow";
  }
  else{
    top++;
    stackArray[top]= val;
    
  }
}
void stack::pop(){
  if(top<=-1){
    cout<<"stack underflow";
  }
  else{
    cout<<"Popped element:"<<stackArray[top]<<endl;
    top--;
  }
}
void stack::display(){
  if(top>0){
    for(int i=top;i>=0;--i){
      cout<<stackArray[i]<<"\n";
    }
  }
  else{
    cout<<"stack is empty";
  }
}
void stack::stacksize(){
    cout<<"Stack size:"<<top+1<<endl;
}
int main(){
  stack s;
  int choice;
  int val;
  
  
  do{
     cout<<"1.push\t"<<"2.pop\t"<<"3.display\t"<<"4.size\t"<<"5.exit"<<endl;
    cout<<"\nEnter the choice:";
    cin>>choice;
    switch(choice){
      case 1:
        {
            cout<<"Enter no of elements to push:";
            int count;
            cin>>count;
            for(int i=0;i<count;i++){
                   cout<<"Enter element to be pushed:";
                   cin>>val;
                   s.push(val);
            }
         break;
        }
       

      case 2:{
        cout<<"Enter no of elements to pop:";
            int count;
            cin>>count;
            for(int i=0;i<count;i++){
                   s.pop();
            }
      break;
      }
       

      case 3:{
        cout<<"Listing the elements in the stack"<<endl;
      s.display();
      break;
      }
      case 4:
       {
           s.stacksize();
           break;
       }
      
       
    }
  }while(choice!=5);
  return 0;
}
