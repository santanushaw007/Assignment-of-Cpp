//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;
    
    
    
int main(){
  ifstream file("student.txt");
  int roll ,marks;
  while(file>>roll>>marks){
      if(roll==2){
          cout<<"record found : "<<roll<<" "<< marks <<endl;
      }
    }
    file.close();
    
     return 0;
    
}