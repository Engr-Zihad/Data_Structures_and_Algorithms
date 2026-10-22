#include <iostream>
using namespace std;
 
int main() {
    int a,sum=0;
    cout<<"Enter a number :";
    cin>>a;
    while(a>0)
    {
        int rem = a%10;
        a = a/10;
        sum = (sum*10)+rem;
    }
    cout<<sum;

return 0;
 
}