//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
    
  int arr[3]={1,2,3};
  int index=5;
  
  try{
    if(index >=3)
    throw "index out of range";
    cout<< arr[index]<<endl;
  }
  catch(const char *msg){
    cout<<msg<<endl;
  }
     
    
     return 0;
    
}