//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;
    
    
    
int main(){
    
   ifstream in ("data.txt") ; 
   ofstream f1 ("part1.txt") ; 
    ofstream f2 ("part2.txt") ; 
    
    string word;
    int count=0;
    while(in>>word){
        if(cout<2)
          f1<<word<<" ";
        else
         f2<<word<," ";
        cout++;
    }
    

    in.close();
    f1.close();
    f2.close();
    cout<<"files split done"<<endl;
       
     
    
     return 0;
    
}