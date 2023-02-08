#include <iostream>
using namespace std;
int main()
{
   int arr[100], value, k, j, i;
   cout << "Enter array size N: ";
   cin >> value;

   cout << "Enter array elements: ";
   for (i = 0; i < value; i++) {
      cin >> arr[i];
   }
   cout << "Enter the inserted Value: ";
   cin >> j;

   cout << "Enter insert item position k: ";
   cin >> k;

   for (i = value; i >= k; i--) {
      arr[i] = arr[i - 1];
   }
   arr[k - 1] = j;

   cout << "Array after insertion: ";
   for (i = 0; i <= value; i++) {
      cout << arr[i] << " ";
   }

   return 0;
}

