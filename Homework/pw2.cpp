#include <iostream>
using namespace std;
 //using loop
int main() {
    int a;
    cout<<"Enter a number :";
    cin>>a;
    if(a<=0)
    {
        cout<<"The number is not power of 2"<<endl;
    }
    while (a%2==0)
    {
        a = a/2;
    }
    if (a==1)
    {
        cout<<"The number is power of 2"<<endl;
    }
    else 
    {
         cout<<"The number is not power of 2"<<endl;
    }

    cout<<endl<<endl<<"Now using bitwise operator"<<endl<<endl;

    //using bitwise operator 
    if(a>0 && (a & (a-1)==0))
    {
         cout<<"The number is power of 2"<<endl;
    }
    else 
    {
         cout<<"The number is not power of 2"<<endl;
    }
 
return 0;
 
}