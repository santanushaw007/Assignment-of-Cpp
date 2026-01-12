//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56


#include <iostream>
using namespace std;
int main(){
    // programme to find second largest element in an array
    int n;
    cout<<" enter the size of array:"<<endl;
    cin>>n;
    int a[n] , i , max , second_max ;
    cout<<" enter the elements of array:"<<endl;
    for(i=0 ; i<n; i++){
        cin>>a[i];

    }
    max = second_max = INT_MIN;
    for(i=0 ; i<n ; i++){
        if(a[i]>max){
            second_max = max;
            max = a[i];
        }
        else if(a[i]>second_max && a[i]!=max){
            second_max = a[i];
        }
    }
    cout<<" second maximum element of array is : "<<second_max<<endl;

    return 0;
}