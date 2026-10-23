#include <iostream>
using namespace std;

int value_pass(int arr[],int size);
 
int main() {
    int size;
    int arr[100];
    cout<<"Enter max index of array :";
    cin>>size;
    for (int i =0; i<size ; i++)
    {
        cout<<"Enter number of index "<<i<<" : ";
        cin>>arr[i];

    }
    value_pass(arr,size);
    cout<<"The result of pass by reference is :";
    for (int i =0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
 
return 0;
 
}
int value_pass(int arr[],int size)
{
    for (int i = 0 ; i<size ; i++)
    {
        arr[i]=arr[i]*2;
    }

}