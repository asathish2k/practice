#include <iostream>
using namespace std;
void createArray(int arraysize){
    int *ptrarray;
    if(ptrarray ==NULL){
        ptrarray = (int *)malloc(arraysize*sizeof(int));
        
    }
    
}
void insertElements(int noOfElem){
    int n;
    cout<<"\nEnter the elements";
    int sizeofarray = sizeofarray(ptrarray);
    if(sizeofarray <noOfElem)
    {
      ptrarray = realloc(ptrarray,noOfElem-sizeofarray*sizeof(int));
    }
    
}
void printElements(){
    cout<<"listing elements in the array:-\n";
    while(ptrarray!==NULL){
        cout<<*ptrarray<<endl;
        ptrarray++;
    }
}



int main(){
 cout<<"Options available"<<endl;
 bool flag = true;
 while(flag){
   cout<<"1.createArray\t2.insertElements\t3.printElements\t4.exit"<<endl;
   int option;
   cout<<"Enter your option:"<<endl;
   cin>>option;
   switch(option){
       case 1:
         cout<<"Enter the size of the array:";
         int size;
         cin>>size;
         createArray(size);
       case 2:
         cout<<"Enter the number of elements you want to insert:";
         int size;
         insertElements(size);
   }
 }
 
 
  
  return 0;
}
