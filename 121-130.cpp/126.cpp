//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;
    
    
    
int main(){
    ofstream file("sample.txt");
    if(file.is_open()){
        file<<"Hello, this is a sample text file."<<endl;
        file<<"This file is created using C++ file handling."<<endl;
        file.close();
        cout<<"File created and data written successfully."<<endl;
    } else {
        cout<<"Error opening file."<<endl;  
    }
    
    
     
    
     return 0;
    
}