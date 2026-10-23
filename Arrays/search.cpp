#include <iostream>
using namespace std;
int search(int arr[],int size,int target);
 
int main() {
    int size,target;
    int arr[100];
    cout<<"Enter your array size :";
    cin>>size;
    cout<<"Enter your target :";
    cin>>target;
    for (int i =0 ; i<size ;  i++)
    {
        cout<<"Enter your "<<i<<" index number :";
        cin>>arr[i];
    }

    int z = search(arr,size,target);
    
    if(z!=-1)
    {
        cout<<"The number is present"<<endl<<"And the index is "<<z<<endl;
    }
    else cout<<"The number is not there";

return 0;
}
int search(int arr[],int size,int target)
{
    for (int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
           // cout<<"the index of the target is :"<<i<<endl;
            return i;
        }
    }
    return -1;
}