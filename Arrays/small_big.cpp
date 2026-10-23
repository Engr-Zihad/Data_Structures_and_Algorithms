#include <iostream>
#include<climits>
using namespace std;
void small_big(int arr[],int size);
 
int main() {
    int size = 10;
    int arr[] = {-7,2,5,56,6,-20,7,9,1,-3};
    small_big(arr,size);
    
 
return 0;
 
}
void small_big(int arr[],int size)
{
    int small = INT_MAX ;
    int big = INT_MIN ;

    for (int i =0 ; i<size ; i++)
    {
        if (arr[i]<small)
        {
            small = arr[i];
        }
         if (arr[i]>big)
        {
            big = arr[i];
        }
    }
    cout<<"The small number is :"<<small<<endl<<"The big number is :"<<big;

}