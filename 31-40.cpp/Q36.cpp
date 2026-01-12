//NAME : SANTANU SHAW 
//COURSE: BTECH(CSE)
//SEC: "A"
//ROLL NO: 56



#include<iostream>
using namespace std;

int main(){
    int row1,row2,column1,column2;
    
    cout<<"enter the value of row1: ";
    cin>>row1;
    cout<<"enter the value of row2: ";
    cin>>row2;
    cout<<"enter the value of column1: ";
    cin>>column1;
    cout<<"enter the value of column2: ";
    cin>>column2;


 int matx1[row1][column1];
 int matx2[row2][column2];
 int i,j,k;
 cout<<"enter the value of 1st matx:"<<endl;
  for(i=0;i<row1;i++)
  {
    for(j=0;j<column1;j++)
    {
        cin>>matx1[i][j];

    }
  }
  for(i=0;i<row1;i++)
  {
    for(j=0;j<column1;j++)
    {
        cout<<matx1[i][j]<<" ";
        
    } cout<<"\n";
  }
  cout<<"enter the value of 2nd matx:"<<endl;
  for(i=0;i<row2;i++)
  {
    for(j=0;j<column2;j++)
    {
        cin>>matx2[i][j];

    }
  }
  for(i=0;i<row2;i++)
  {
    for(j=0;j<column2;j++)
    {
        cout<<matx2[i][j]<<" ";
        
    } cout<<"\n";
  }
 if(column1==row2)
  {
    int mul[row1][column2];
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)
        {
            mul[i][j]=0;
            for(k=0;k < column1;k++)
            {
                mul[i][j] +=matx1[i][k]*matx2[k][j];
            }
        }
    }
    cout<<"matrix multiplication is :"<<endl;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)
        {
           cout<< mul[i][j]<<" ";
            
        } cout<<"\n";
    }

  }
 else
  {
    cout<<"matrix multriplication  is not possible";
  }
}