//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;
    
    
    
int main(){
    int roll;
    int marks;
    ifstream file("student.txt");
    ofstream out("temp.txt");
    while(file>>roll>>marks){
        if(roll !=23){
            
            out<<roll<<" "<<marks<<endl;
        }

    in.close();
    out.close();
     
    cout<<"Record updated successfully."<<endl;
     
    
     return 0;
    
}