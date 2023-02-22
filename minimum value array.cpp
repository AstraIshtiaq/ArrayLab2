#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter array number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int minimum=arr[0];
    for(i=1;i<n;i++)
    {
        if (arr[i]<minimum)
        {
            minimum=arr[i];
        }
    }
    cout<<"Minimum value is: "<<minimum<<endl;
    return 0;
}
