#include<iostream>
using namespace std;
int main()
{
    int n=7,i=0;
    int arr[n]={2,3,4,5,6,7,8};
    cout<<"Array Is : "<<endl;
    while(i<7)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    n=4;
    for(i=3;i<7;i++)
    {
        arr[i]=arr[i+1];
    }
    int k=0;
    cout<<"\n"<<endl;
    while(k<4)
    {
        cout<<arr[k]<<" ";
        k++;
    }
    return 0;
}
