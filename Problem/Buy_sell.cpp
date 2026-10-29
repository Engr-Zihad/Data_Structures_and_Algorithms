#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxprofit(vector<int>& prices);
int main() {
    vector<int> prices;
    int n;
    cout<<"Enter your total day's :";
    cin>>n;
    for(int i =0 ; i<n; i++)
    {
        cout<<"Enter your price of "<<i<<" nummber day :";
        int price;
        cin>>price;
        prices.push_back(price);
    }
    cout<<"The maximum profit is :"<<maxprofit(prices);



   
    return 0;
}
    int maxprofit(vector<int>& prices) {
        int maxprofit =0 , bestbuy = prices[0];
        for(int i =0 ;i<prices.size();i++)
        {
            if (bestbuy<prices[i])
            {
                maxprofit= max(maxprofit,prices[i]-bestbuy);
            }
            bestbuy= min(bestbuy,prices[i]);
        }
        return maxprofit;
    }