// mejority elements by moore's vooting algorithm
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
   int freq =0 , ans=0,count=0;
   for (int i =0 ; i<n;i++)
   {
    if(freq==0)
    {
        ans = nums[i];

    }
    if(nums[i]==ans)
    {
        freq++;
    }
    else 
    {
       freq --;
    }

   }
   for (int val : nums)
   {
    if (val ==ans)
    {
        count++;
    }
   }
   if(count>n/2)
   {
    return ans;
   }
   else 
   {
    return -1;
   }
    

}