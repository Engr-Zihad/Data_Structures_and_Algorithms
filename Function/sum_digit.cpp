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
    int sum_1=0;
    // for (int num = x ; num>0 ; num/=10)
    // {
    //    int rem = num%10;
    //     sum+=rem;
    // }

    while (x>0) {
        sum_1+= (x%10);
        x = x/10;
    }

    return sum_1;
}