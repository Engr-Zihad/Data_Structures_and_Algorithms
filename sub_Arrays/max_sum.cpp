#include <iostream>
using namespace std;
 
int main() {
    int arr[] = {-1,-9,10,-5,3,7,-7,-10,5,-4,-100,6};
    int max_sum =0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++)
    {
        int current =0;
        for(int j=i ; j<n ;j++)
        {
            current+=arr[j];
            max_sum = max(current,max_sum);  
        }
    }
    cout<<"the max sum is :"<<max_sum;
return 0;
 
}