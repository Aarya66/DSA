#include<iostream>
#include<vector>
using namespace std;

int maxProfit(int prices[],int n) {
    int buy_price = prices[0];
    int profit=0;
    
    for(int i=1;i<n;i++){
        if(prices[i]<buy_price){
            buy_price=prices[i];
        }
        else
        {
            int current_profit=prices[i]-buy_price;
            profit=max(current_profit,profit);
        }
    }
    return profit;
}
int main()
{
    int n;
    cout<<" enter number of days : ";
    cin>> n;

    int prices[n];
    cout<<"enter prices for "<<n<<" days : ";
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }

    int max_profit = maxProfit(prices, n);
    cout << "Maximum profit: " << max_profit << endl;
    return 0;
}
