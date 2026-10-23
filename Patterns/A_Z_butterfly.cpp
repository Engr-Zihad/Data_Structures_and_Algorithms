#include <iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter a number :";
    cin>>a;

    for (int i=0 ; i<a ; i++)
        {
        for (int j=0 ; j<i+1 ; j++)
            {
                cout<<'A'<<" ";
            }
        for (int k=0 ; k< (2*(a-i))-2; k++)
            {
                cout<<"  ";
            }
        for (int l=0 ; l<i+1 ; l++)
            {
                cout<<'Z'<<" ";
            }
        cout<<endl;
        }
    for (int i =0 ; i<a ; i++)
        {
            for (int j=i; j<a ;j++)
                {
                    cout<<'Z'<<" ";
                }
            for (int k=0; k<2*i ; k++)
                {
                    cout<<"  ";
                }
            for (int l=i ; l<a ; l++)
                {
                    cout<<'A'<<" ";
                }
            cout<<endl;
        }
    return 0;
}