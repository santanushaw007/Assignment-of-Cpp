//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
#include<fstream>
using namespace std ;
    
    
    
int main(){
    int x =100;

    ofstream out("bin.dat",ios::binary);
    out.write((char*)&x,sizeof(x));
    out.close();
    int y;
    ifstream in("bin.dat",ios::binary);
    in.read((char*)&y,sizeof(y));
    in.close();
    cout<<"value of y:"<<y<<endl;
    
     
    
     return 0;
    
}