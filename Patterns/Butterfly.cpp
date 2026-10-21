#include <iostream>
using namespace std;
 
int main() {
 int a;
 cout<<"Enter your number of line :";
 cin>>a;
 //for upper pattern
 for(int i =0 ; i<a ; i++)
 {
    for (int j=0 ; j < i+1 ; j++)
    {
        cout<<'*';
    }
    for (int k= i ; k < (a-1) ; k++)
    {
        cout<<" ";
    }
     for (int l= i; l < (a-1) ; l++)
    {
        cout<<" ";
    }
    for (int m=0 ; m < i+1 ; m++)
    {
        cout<<'*';
    }
    cout<<endl;
 }
 // for lower pattern 

 for (int n=0 ; n<a ; n++)
 {
    for(int o = n ; o<a ; o++)
    {
        cout<<'*';
    }
    for (int p =0 ; p<n ;p++)
    {
        cout<<" ";
    }
     for (int q =0 ; q<n ;q++)
    {
        cout<<" ";
    }
    for(int r = n ; r<a ;r++)
    {
        cout<<'*';
    }
    cout<<endl;
 }
return 0;
 
}
