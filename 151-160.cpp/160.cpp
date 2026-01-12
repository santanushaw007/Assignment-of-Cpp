//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
class base{};
class derived : public base{};
    
int main(){
    try{
        throw derived();
    }
    catch(derived){
        cout<<"derived exception caugth "<<endl;
    }
    catch(base){
        cout<<"base exception caugth"<<endl;
    }
     
    
     return 0;
    
}