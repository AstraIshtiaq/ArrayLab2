#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Number of row: ";
    cin >> row;
    cout << "Number of column: ";
    cin >> col;

    int A[row][col], B[row][col], C[row][col];

    cout << "Enter Matrix A:" <<endl;
    for (int i=0; i<row; i++)
    {
      for (int j=0;j<col;j++)
      {
         cout<<"[" <<i<< "][" <<j<< "]: ";
         cin >>A[i][j];
      }
    }

    cout << "Enter Matrix B:" << endl;
    for (int i=0; i<row;i++)
    {
      for (int j=0; j<col; j++)
        {
           cout<<"[" <<i<< "][" <<j<< "]: ";
           cin >> B[i][j];
        }
    }

    cout<<"Matrix C is: "<<endl;
    for (int i=0; i<row; i++)
        {
           for (int j=0; j<col; j++)
             {
                 C[i][j] = A[i][j] - B[i][j];
                 cout<<C[i][j]<<" ";
             }
             cout<<endl;
        }

    return 0;
}
