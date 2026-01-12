//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
 struct node{
    int data;
    node *next;
 }   ;
    
int main(){
    
  node *head= new node();
  head->data=10;
  head->next=NULL;
  
  cout<<"linked list value: "<< head-> data <<endl;

     
    
     return 0;
    
}