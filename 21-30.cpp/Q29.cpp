//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;
int main(){
    //programme demonstrating break & continue statements
    for(int i=1;i<=10;i++){
        if(i==5){
            continue; //skips the iteration when i is 5
        }
        if(i==8){
            break; //exits the loop when i is 8
        }
        cout<<i<<endl;
    }
    return 0;
}