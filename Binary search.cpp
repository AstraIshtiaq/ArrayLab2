#include<iostream>
using namespace std;
int main()
{
  int arr[20],n,x;
  cout<<"Enter the array number: ";
  cin>>n;
  cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter searching element: ";
    cin>>x;

    int BEG=0, END=n-1, MID;
    while(BEG<=END)
    {
        MID=(BEG+END)/2;
        if(arr[MID]==x)
        {
            cout<<"Element position: "<<MID+1<<endl;
            return 0;
        }
        else if(arr[MID]<x)
            END=MID+1;
        else
            BEG=MID-1;
    }
    cout<<"Element not found: " <<endl;
    return 0;
}
