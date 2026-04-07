class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.empty())
            return 0;
        std::set<int> mem(nums.begin(), nums.end());
        std::set<int>::iterator it = mem.begin();
        std::set<int>::iterator prev = it;
        ++it;
        int current_streak = 1;
        int longest = 0;
        for (; it != mem.end(); ++it)
        {
            if (*it == *prev + 1)
            {
                current_streak++;
            }
            else
            {
                if (current_streak > longest)
                {
                    longest = current_streak;
                }
                current_streak = 1;
            }
            prev = it;
        }
        return std::max(longest, current_streak);
    }
};
