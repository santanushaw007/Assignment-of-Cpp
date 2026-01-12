//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;
    
    
    
int main(){
    ifstream file("student.txt");
    string word;
    
    while(file>>word){
        cout<<"word: "<<word<<endl;
    }
    file.close();
     return 0;
    
}