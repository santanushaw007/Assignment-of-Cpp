//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>  
using namespace std ;
  
    
    
int main(){
  ifstream file("sample.txt");
  
  string text;
   file>>text;
   cout<<"file content:"<<text<<endl;
    
     file.close();
    
     return 0;
    
}