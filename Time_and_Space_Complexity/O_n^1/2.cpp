#include <iostream>
using namespace std;

int main() {
    int z;
    cout << "Enter your number : ";
    cin >> z;
    for(int i =2 ; i*i<=z;i++)
    {
        if(z%i==0)
        {
            cout<<"non prime ";
            break;
        }
    }
    cout<<"prime number";
 
    return 0;
}