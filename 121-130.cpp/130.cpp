//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;
    
    
    
int main(){
    ofstream file("output.txt");
    file<<"This is a sample output file."<<endl;
    file<<"File handling in C++ is easy."<<endl;
    file.close();
    cout<<"Data written to output.txt successfully."<<endl;
    
     
    
     return 0;
    
}