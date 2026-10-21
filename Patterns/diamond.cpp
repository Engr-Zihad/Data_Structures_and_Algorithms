#include <iostream>
using namespace std;
 
int main() {
 int a;
 cout<<"Enter your number :";
 cin>>a;

 //for upper pattern

 for(int i=0 ; i<a ; i++)
 {
    for (int j =0 ; j<a-1-i;j++)
    {
        cout<<" ";
    }
    cout<<"*";
    if (i!=0)
    {
        for (int k =0 ; k <2*i-1;k++)
        {
            cout<<" ";
        }
        cout<<'*';
    }
    cout<<endl;

    //for lower pattern
    
 }
 for (int l =0 ; l< a-1 ; l++)
    {
        for (int m =0 ; m<l+1;m++)
        {
            cout<<" ";
        }
        cout<<'*';
        if (l!=a-2)
        {
            for (int n = 0 ; n < 2*(a-2-l)-1;n++)
            {
                cout<<" ";
            }
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}