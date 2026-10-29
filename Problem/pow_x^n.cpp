//time taken O(logn)
#include <iostream>
using namespace std;
double mypow(double x , int n);

int main() {
    double x;
    int n;
    cout << "Enter your number : ";
    cin >> x;
    cout << "Enter your power : ";
    cin >> n;
    cout<<"Your answer is :"<<mypow(x,n);
 
    return 0;
}
double mypow(double x , int n)
{
    if (x==0) return 0;
    if (x==1) return 1;
    if (n==0) return 1;
    if (n==1) return x;
    if(x==-1)
    {
        if(n%2==0) return 1;
        else return -1;

    }
    long binform =n;
    if(n<0)
    {
        x=1/x;
        binform = - binform;
    }
    double answer =1;
    while (binform>0)
    {
        if(binform%2==1)
        {
            answer*=x;
        }
        x*=x;
        binform/=2;
    }
    return answer;
}