//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;
int main(){
    //---programme using loop to print series ----
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Even numbers from 1 to "<<n<<" are: "<<endl;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
    }
   
    return 0;

}