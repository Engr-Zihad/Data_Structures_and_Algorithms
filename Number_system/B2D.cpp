#include <iostream>
using namespace std;
int B2D (int x);
 
int main() {
    int a;
    cout<<"Enter your decimal number :";
    cin>>a;
    cout<<B2D(a);
 
return 0;
 
}

int B2D (int x)
{
    int decimal=0;
    int pw = 1;
    while (x>0)
    {
        int rem = x%10;
        x/=10;
        decimal += (rem*pw);
        pw*=2; 
    }
    return decimal;
}