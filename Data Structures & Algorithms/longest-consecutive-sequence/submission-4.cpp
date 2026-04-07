class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.empty())
            return 0;
        std::unordered_set<int> mem(nums.begin(), nums.end());
        std::unordered_set<int>::iterator it;
        int currentStreak = 1;
        int longest = 0;
        for(it = mem.begin(); it != mem.end(); ++it)
        {
            if (mem.find(*it - 1) == mem.end())
            {
                currentStreak = 1;
                int currentNum = *it;
                while (mem.find(currentNum + 1) != mem.end())
                {
                    currentNum++;
                    currentStreak++;
                }
            }
            longest = std::max(longest, currentStreak);
        }
        return longest;
    }
};
