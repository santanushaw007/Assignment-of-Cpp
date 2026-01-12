//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;
    
    
    
int main(){
  ifstream f1 ("file1.txt") ; 
   ifstream f2 ("file2.txt") ; 
    ofstream f3 ("merge.txt") ; 
    
    string word;
    while(f1 >> word)
    f3<<word<<" ";

    while(f2>>word)
    f3<< word<<" ";

    f1.close();
    f2.close();
    f3.close();

    cout<<"files merged"<<endl;
     
    
     return 0;
    
}