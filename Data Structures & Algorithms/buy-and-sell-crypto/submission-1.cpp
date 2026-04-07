class Solution {
public:
    int maxProfit(std::vector<int>& prices) 
    {
        int l = 0;
        int r = 1;
        int maxProfit = 0;

        while (r < prices.size())
        {
            if (prices[l] < prices[r])
                maxProfit = std::max(maxProfit , prices[r] - prices[l]);
            else
                l = r;
            r++;
        }
        return maxProfit;
    }
};
