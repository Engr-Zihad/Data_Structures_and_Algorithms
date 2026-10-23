#include <iostream>
using namespace std;
void sum_div(int arr[],int size);
 
int main()
{
    int size;
    int arr[100];
    cout<<"Enter your max array size :";
    cin>>size;
    for (int i =0 ; i<size ; i++)
    {
        cout<<"Enter your"<<i<<"number index element :";
        cin>>arr[i];
    }
    sum_div(arr,size);
}
void sum_div(int arr[],int size)
{
   int  sum =0;
   int product =1;

    for(int i =0 ; i<size ; i++)
    { 
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"The sum of the array is :"<<sum<<endl<<"The product of the array is :"<<product;
}