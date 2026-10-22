#include <iostream>
using namespace std;
int a =10 ; // global veriable 
void local ()
{
   int b =10 ;  // local veriable 
}
int main() {

    int  c= 1000 ; // global veriable for main function 

  for (int d =0; ;)
    {
     int e = 10000;  // local veriable 

    }

    cout<<a<<endl<<c/*<<b<<d<<e*/; // only global veriable print "a" and "c"
 
return 0;
 
}
