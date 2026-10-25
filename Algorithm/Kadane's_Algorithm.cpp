#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
 
int main() {
    int max_sum=INT_MIN,current=0;
    vector<int> nums = {-1,-9,10,-5,3,7,-7,-10,5,-4,-100,6};
    for(int val : nums)
    {
        current+=val;
        max_sum = max(max_sum,current);
        if(current<0)
        {
            current=0;
        }
    }
    cout<<"the max sum is :"<<max_sum;
return 0;
 
}