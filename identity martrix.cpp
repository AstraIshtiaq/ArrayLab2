#include <iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Number of row: ";
    cin>>row;
    cout<<"Number of col: ";
    cin>>col;

    int mat[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"[" <<i<< "][" <<j<< "]: ";
            cin>>mat[i][j];
        }
    }
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    // Check if matrix is an identity matrix
    bool isIdentity=true;
    for(int i=0; i<n; i++)
        {
        for(int j=0; j<n; j++)
        {
            if(i == j && mat[i][j]!=1)
            {
                isIdentity = false;
                break;
            }
            else if(i!=j && mat[i][j]!=0)
            {
                isIdentity = false;
                break;
            }
        }
    }
    // Output result
    if(isIdentity)
        {
        cout << "Given Matrix is an identity matrix." << endl;
        }
    else
        {
        cout << "Given Matrix is not an identity matrix." << endl;
        }
    return 0;
}

