#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Number of row: ";
    cin>>row;
    cout<<"Number of col: ";
    cin>>col;

    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"[" <<i<< "][" <<j<< "]: ";
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int transpose[col][row];
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }

    cout<<"Transpose matrix is: "<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}

