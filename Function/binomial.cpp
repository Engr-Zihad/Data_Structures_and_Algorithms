#include <iostream>
using namespace std;

int numfact(int x)    // function defination 
{
    int fact = 1;
    for (int i =1 ; i<=x ; i++)
    {
        fact *=i;
    }
    return fact;
}

int binomial (int m,int n)
{
    int factn = numfact(m);
    int factr = numfact(n);
    int factnmr = numfact(m-n);
    return factn/(factr*factnmr);
}
 
int main() {
    int a,b;
    cout<<"Enter binomial n :";
    cin>>a;
    cout<<"Enter binomial r :";
    cin>>b;
    int z = binomial(a,b);      // function call
    cout<<z;
 
return 0;
 
}