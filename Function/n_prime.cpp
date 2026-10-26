//prime fro 0 to n 
#include <iostream>
using namespace std;

void prime (int x);
 
int main() {
    int a;
    cout<<"Enter the numbwer :";
    cin>>a;
    prime(a);

return 0;
 
}
void prime (int x)
{
   
    for (int i=0 ; i<x ;i++)
    { 
         int count =0;
        for (int j=2 ; j<i ;j++)
        
        {
        if (i%j==0)
        {
            count++;
        } 
    }
    if(count==0)
        {
            cout<<i<<" ";
        }
    

}

}
