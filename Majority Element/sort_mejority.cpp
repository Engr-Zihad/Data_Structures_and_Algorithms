// mejority elements by sort
#include <iostream>
#include<vector>
#include<algorithm>
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
    sort(nums.begin(),nums.end());
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
   int freq =1 , ans=nums[0];
   for (int i =1 ; i<n;i++)
   {
    if(nums[i]==nums[i-1])
    {
        freq++;
    }
    else 
    {
        freq = 1;
        ans = nums[i];
    }
    if(freq>n/2)
    {
        return ans;
    }

   }
    return -1;

}