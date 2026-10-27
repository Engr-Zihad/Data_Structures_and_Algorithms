#include <iostream>
#include<climits>
#include<vector>
using namespace std;

int main() {
    int z,factorial=1,max_sum=INT_MIN,current =0;
    vector<int> vec = {-1,-9,10,-5,3,7,-7,-10,5,-4,-100,6};
    cout << "Enter your number : ";
    cin >> z;
    for(int i=1;i<=z;i++)
    {
        factorial*=i;
    }
    cout<<"the Factorial is :"<<factorial<<endl;
    //kadan's algorith
    for(int i =0 ; i<vec.size();i++)
    {
        current+=vec[i];
        max_sum = max(current,max_sum);
        if(current<0)
        {
            current =0;

        }
    }
    cout<<"The max sum is :"<<max_sum;



    return 0;
}
