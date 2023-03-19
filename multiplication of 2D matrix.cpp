#include <iostream>
using namespace std;
int main()
{
    int row,col,row2,col2;

    cout <<"Enter row and column of A: ";
    cin >>row>>col;

    cout <<"Enter row and column of B: ";
    cin >>row2>>col2;

    int A[row][col],B[row2][col2],C[row][col2];

    cout <<"Enter matrix A:" << endl;
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout<<"[" <<i<< "][" <<j<< "]: ";
            cin >>A[i][j];
        }
    }

    cout << "Enter matrix B:" << endl;
    for (int i=0;i<row2;i++)
    {
        for (int j=0;j<col2;j++)
        {
            cout<<"[" <<i<< "][" <<j<< "]: ";
            cin >>B[i][j];
        }
    }

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col2;j++)
        {
            C[i][j]=0;
            for (int k=0;k<col;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    cout << "Result matrix C:" << endl;
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col2;j++)
        {
            cout <<C[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}

