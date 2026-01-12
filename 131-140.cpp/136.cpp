//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>   
using namespace std ;
    
    
    
int main(){
   
    ifstream file("student.txt");

    if(file){
        cout<<"File opened successfully."<<endl;
    } else {
        cout<<"Error opening file."<<endl;
    }
    file.close();
     
    
     return 0;
    
}