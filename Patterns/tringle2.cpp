// this is reverse tringle 
#include <iostream>
using namespace std;
 
int main() {
 int a,val= 1;
 cout<<"Enter your value :";
 cin>>a;
 for (int i = 0 ; i<=a; i++)
 {
    for (int j = i ; j < a ; j++)
    {
        cout<<val<<" ";
        val++;
    }
    cout<<endl;
 }
return 0;
 
}