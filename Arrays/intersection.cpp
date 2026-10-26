// using 2 loops 
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {2,3,4,56,7,6,34,21,1,257,4};
    int arr2[] = {5,6,2,1,25,3,2,5,73,5,1,4,7,84,3,25,7,8,99,43};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    cout << "Intersection of arrays: ";

    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size2; j++)
         {
            if (arr1[i] == arr2[j]) 
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}