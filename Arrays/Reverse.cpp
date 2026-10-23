#include <iostream>
using namespace std;
void Reverse(int arr[],int size);
 
int main() {
    int size;
    int arr[100];
    cout<<"Enter your max array size :";
    cin>>size;
    for (int i =0 ; i<size ; i++)
    {
        cout<<"Enter your"<<i<<"number index element :";
        cin>>arr[i];
    }
    Reverse(arr,size);

    cout<<"The reverse array by two pointers :";

    for(int i =0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
 
return 0;
 
}
void Reverse(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    //By reverse loop
    cout<<"The reverse array is : ";
    for(int i = size ; i>0 ;i--)
    {
        cout<<arr[i-1]<<" ";
    }
    cout<<endl;
    // The reverse array by  pointers

    while (start<end)
    {
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }
}