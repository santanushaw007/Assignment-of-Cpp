//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
 
    string user="admin";
    string pass="1234";

    string u ="admin";
    string p ="0000";

    try{
        if(u != user || p != pass)
        throw"login failed";
        cout<<"login successful"<<endl;
    }
    
    
     catch(const char *msg){
        cout<<msg<<endl;
     }
    
    
     return 0;
    
}