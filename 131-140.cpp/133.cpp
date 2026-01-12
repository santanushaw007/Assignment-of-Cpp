//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
    int roll=23;
    int marks=55;
   ofstream file("student.txt");
   file<<roll<<" "<<marks<<endl; 
   file.close();
    cout<<"Data written to student.txt successfully."<<endl;
     
    
     return 0;
    
}