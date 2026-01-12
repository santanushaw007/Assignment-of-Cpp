//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;
    
    
    
int main(){
  try{
    ifstream file("no_file.txt");
    if (! file)
    throw "file not found";
   file.close();
  }  
  catch(const char *msg){
    cout<<msg<<endl;
  }
    
     
    
     return 0;
    
}