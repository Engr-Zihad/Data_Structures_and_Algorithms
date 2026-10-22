#include <iostream>
using namespace std;
    void fib(int x);
int main() {
    int a;
    cout<<"Enter a number :";
    cin>>a;
    fib(a);
 
return 0;
 
}

void fib(int x)
{
    int sum=0,sum2=1,final_sum;
    for (int i = 0; i<x ; i++)
    {
        cout<<sum<<" ";
        final_sum = sum + sum2;
        sum = sum2;
        sum2 = final_sum;
    }
}