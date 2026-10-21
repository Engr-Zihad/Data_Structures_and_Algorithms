#include <iostream>
using namespace std;
 
int main() {
   int a;
   cout <<"Enter your number :";
   cin>>a;
   for (int i = 0 ; i<a ; i++)
   {
    for (int j = i ; j<(a-1);j++)
    {
        cout<<" ";
    }
    for (int k = 0 ; k < i+1 ; k++)
    {
        cout<<(k+1);
    }
    // for (int m = 1 ; m < (i+1) ; m++)
    // {
    //     cout<<m;
    // }
    // for (int l = i ; l<a ; l++)
    // {
    //     cout<<" ";
    // }

    for (int n = i; n>0 ; n--)
    {
        cout<<n;
    }
    cout<<endl;
   }
return 0;
 
}