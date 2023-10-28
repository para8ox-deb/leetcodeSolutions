class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int n=prices.size();

        int rem;
        int firstrem = money-prices[0];
        if(firstrem<0){
            return money;
        }

        int secondrem = firstrem-prices[1];
        if(secondrem<0){
            return money;
        }
        else{
            return secondrem;
        }
    }
};