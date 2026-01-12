//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
   try{
        throw 2.5;
    }
    catch(int x){
        cout<<"integer exception caugth "<<endl;
    }
    catch(double y){
        cout<<"double exception caugth"<<endl;
    }
       
    
     
    
     return 0;
    
}