#include <iostream>
using namespace std;
 
int main() {
 int a,b;
 cout<<"Enter line and Element count :";
 cin>>a>>b;
 for (int i = 0 ; i<a ; i++)
 {
    for (int j = 0 ; j<b ; j ++)
    {
        cout<<'*';
    }
    cout<<endl;
    for (int j = 0 ; j<b ; j ++)
    {
        cout<<i;
    }
    cout<<endl;
 }
return 0;
 
}