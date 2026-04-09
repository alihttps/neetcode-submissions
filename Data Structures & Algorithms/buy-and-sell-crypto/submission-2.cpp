class Solution {
public:
    int maxProfit(std::vector<int>& prices) 
    {
        int l = 0;
        int r = 1;
        int maxprofit = 0;
        while (r < prices.size())
        {
            int profit = prices[r] - prices[l];
            maxprofit = std::max(profit, maxprofit);
            if (prices[r] < prices[l])
                l = r;
            r++;
        }
        return maxprofit;
    }
};
