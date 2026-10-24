#include <iostream>
#include<vector>
using namespace std;

int main() {
    int ans =0;
    vector<int> vec = {1,2,4,5,1,2,4};
    for(int val : vec)
    {
        ans ^=val;
    }
    cout<<"The single sumber is :"<<ans;

 
return 0;
 
}