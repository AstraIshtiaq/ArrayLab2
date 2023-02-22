#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter array number: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maximum, maximum2;
    maximum = maximum2 = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum2 = maximum;
            maximum = arr[i];
        }
        else if (arr[i] > maximum2 && arr[i] < maximum)
        {
            maximum2 = arr[i];
        }
    }
    int minimum, minimum2;
    minimum = minimum2 = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < minimum)
        {
            minimum2 = minimum;
            minimum = arr[i];
        }
        else if (arr[i] < minimum2 && arr[i] > minimum)
        {
            minimum2 = arr[i];
        }
    }
    cout << "2nd Maximum value is: " << maximum2 << endl;
    cout << "2nd Minimum value is: " << minimum2 << endl;

    return 0;
}
