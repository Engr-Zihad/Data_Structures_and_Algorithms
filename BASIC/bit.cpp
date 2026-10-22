#include <iostream>
using namespace std;
 
int main() {
    int a,b,c,d;
    cout<<"Enter two number :";
    cin>>a>>b;
    cout<<"The bitwise OR is :"<<(a|b)<<endl;
    cout<<"The bitwise AND is :"<<(a&b)<<endl;
    cout<<"The bitwise XOR is :"<<(a^b)<<endl;
    cout<<"Enter number for left shirt and right shift :";
    cin>>c;
    cout<<"Enter how many times you want to shift :";
    cin>>d;
    cout<<"The left shit of 1st number is :"<<(a<<d)<<endl;
    cout<<"The right shift of 1st number is :"<<(a>>d)<<endl;

return 0;
 
}
