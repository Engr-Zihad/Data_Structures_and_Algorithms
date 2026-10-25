#include <iostream>
#include<vector>
using namespace std;
vector<int> pair_sum(vector<int> nums,int target,int n);
int main() {
    vector<int> nums;
    int target,n;
    cout<<"Enter your max element number :";
    cin>>n;
    cout<<"Enter your target :";
    cin>>target;
    for(int i =0; i<n ;i++)
    {
        int val;
        cout<<"Enter your "<<i<<" index number :";
        cin>>val;
        nums.push_back(val);

    }
    vector<int> ans = pair_sum(nums,target,n);
    if(ans.size()==2){
    cout<<"["<<ans[0]<<","<<ans[1]<<"]";
    }
    else
    {
        cout<<"The pair sum does't exist";
    }
return 0;
}
vector<int> pair_sum(vector<int> nums,int target,int n)
{
    vector<int> ans;
    for(int i =0; i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if (nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}