//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
 
  void fun2(){
        throw 10;
    }
    void fun1(){
        fun2();
    }
    
    
int main(){
 try{
    fun1();
 }
  catch(int x){
    cout<<"exeption caugth: "<<x<<endl;
  }
     
    
     return 0;
    
}