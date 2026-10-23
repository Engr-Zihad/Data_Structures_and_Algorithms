#include <iostream>
using namespace std;
void min_max_rev(int arr[], int size);
 
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

     cout<<endl<<"before reverse :";
    //before reverse 
     for(int i =0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"after reverse :";

    min_max_rev(arr,size);

    // after reverse 
     for(int i =0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }


 
return 0;
 
}

void min_max_rev(int arr[], int size)
{
    int max = 0;
    int min = 0;

    for(int i =0 ; i<size ; i++)
    {
        if (arr[i]>arr[max])
        {
            max=i;
        }
        if (arr[i]<arr[min])
        {
            min=i;
        }

    }

    if(max!=min)
    {
        swap(arr[max],arr[min]);
    }

}