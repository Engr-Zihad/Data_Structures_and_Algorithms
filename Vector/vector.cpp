#include <iostream>
#include<vector>
using namespace std;
 
int main() {
    vector<int> vec = {4,5,6,73,2};
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout<<"The first element is :"<<vec.front()<<endl;
    cout<<"The last element is :"<<vec.back()<<endl;
    cout<<"The size of the vector is :"<<vec.size()<<endl<<"The capacit of the vector is :"<<vec.capacity()<<endl;
    vec.pop_back();
    cout<<"The size of the vector is :"<<vec.size()<<endl<<"The capacit of the vector is :"<<vec.capacity()<<endl;
    cout<<"the vector elements are :";
    for(int val :vec)
    {
        cout<<val<<" ";
    }

    

    

 
return 0;
 
}