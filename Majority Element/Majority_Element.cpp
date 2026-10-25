#include <iostream>
#include<vector>
using namespace std;
int majority_element(vector<int> nums,int n);
int main() {
    vector<int> nums;
    int n;
    cout<<"Enter your max element number :";
    cin>>n;
    for(int i =0; i<n ;i++)
    {
        int val;
        cout<<"Enter your "<<i<<" index number :";
        cin>>val;
        nums.push_back(val);

    }
    int ans = majority_element(nums,n);
    if(ans!=-1)
    {
        cout<<"The mejority element is :"<<ans;
    }
    else 
    {
        cout<<"Have no majority elements";
    }
return 0;
}
int majority_element(vector<int> nums,int n)
{
    for( int val : nums)
    {
        int freq =0;
        for ( int el : nums)
        {
            if(val == el)
            {
                freq++;
            }

        }
        if(freq>n/2)
        {
            return val;
        }
    }
    return -1;

}