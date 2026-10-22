#include <iostream>
using namespace std;

void prime (int x);
 
int main() {
    int a;
    cout<<"Enter the numbwer :";
    cin>>a;
    prime(a);

return 0;
 
}
void prime (int x)
{
    int count = 0;
    for (int i=2 ; i<x ;i++)
    {
        if (x%i==0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout<<"prime";
    }
    else 
    {
        cout<<"Not a prime";
    }
}