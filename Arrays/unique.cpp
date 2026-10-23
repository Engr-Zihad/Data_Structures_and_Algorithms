#include <iostream>
using namespace std;

int main() {
    int size,target;
    int arr[100];
    cout<<"Enter your array size :";
    cin>>size;
    for (int i =0 ; i<size ;  i++)
    {
        cout<<"Enter your "<<i<<" index number :";
        cin>>arr[i];
    }

    cout << "Unique elements: ";
    for (int i = 0; i < size; i++) 
    {
        int j;
        for (j = 0; j < i; j++) 
        {
            if (arr[i] == arr[j])
            {
                break; 
            }
        }
        if (i == j) 
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}