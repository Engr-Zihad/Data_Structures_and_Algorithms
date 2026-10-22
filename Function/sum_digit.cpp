#include <iostream>
using namespace std;
int sum_digit (int x);
int main() {
 int  a;
 cout<<"Enter your digit :";
 cin>>a;
 cout<<sum_digit(a);

return 0;
 
}
int sum_digit (int x)
{
    int sum=0;
    for (int num = x ; num>0 ; num/=10)
    {
       int rem = num%10;
        sum+=rem;
    }
    return sum;
}