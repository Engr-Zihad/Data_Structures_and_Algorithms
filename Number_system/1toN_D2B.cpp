#include <iostream>
using namespace std;
int D2B (int x);
 
int main() {
    int a;
    cout<<"Enter your decimal number :";
    cin>>a;
    for (int i =1 ; i<=a ;i++)
    {
        cout<<D2B(i)<<endl;
    }
    
 
return 0;
 
}

int D2B (int x)
{
    int binary=0;
    int pw = 1;
    while (x>0)
    {
        int rem = x%2;
        x/=2;
        binary = binary + (rem*pw);
        pw*=10; 
    }
    return binary;
}