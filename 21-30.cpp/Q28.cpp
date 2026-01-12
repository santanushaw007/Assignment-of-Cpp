//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56

#include <iostream>
using namespace std;
int main(){
    //programme using do-while loop to print numbers from 1 to n//
    int n;
    cout<<"Enter a positive integer n: ";
    cin>>n;
    cout<<"Numbers from 1 to "<<n<<" are:"<<endl;
    int i = 1;
    do{
        cout<<i<<" ";
        i++;
    } while(i <= n);
    return 0;
}