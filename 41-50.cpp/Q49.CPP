//NAME : SANTANU SHAW
//COURSE: BTECH(CSE)
//SEC:(A) 
//ROLL NO: 56
    
    
#include<iostream>
using namespace std ;

class water
{
    public:
        class snow
        {
            public:
                void showsnow()
                {
                    cout<< " snow is a state of water."<<endl;
                }
        };
                void showwater()
                {
                    cout<<" earth is made up of 78% of water"<<endl;
                }

};
    
    
int main(){
    
    water w;
    w.showwater();
    
    water::snow s;
    s.showsnow();
     
    
     return 0;
    
}