#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Number of row: ";
    cin>>row;
    cout<<"Number of column: ";
    cin>>col;

    int A[row][col];

    cout<<"Enter Matrix A:" <<endl;
    for(int i=0; i<row; i++)
    {
      for(int j=0;j<col;j++)
      {
         cout<<"[" <<i<< "][" <<j<< "]: ";
         cin >>A[i][j];
      }
    }
    int Row[2],Col[2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<1;j++)
        {
            Row[i]=A[i][j]+A[i][j+1];
        }
    }
     for(int j=0;j<2;j++)
    {
        for(int i=0;i<1;i++)
        {
            Col[j]=A[i][j]+A[i+1][j];
        }
    }
    cout << "Result matrix C:" << endl;
        for (int j=0;j<2;j++)
        {
            cout <<j+1<<" No Column :"<<Col[j]<<endl;
            cout <<j+1<<" No Row :"<<Row[j]<<endl;
        }
        cout << endl;
    return 0;
}
