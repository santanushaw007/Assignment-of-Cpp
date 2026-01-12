//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
    
  cout<<"cout is output stream"<<endl;
  cin.get();
  ofstream file("test.txt");
  file<<"ofstream is file output stream";
  file.close();  
     
    
     return 0;
    
}