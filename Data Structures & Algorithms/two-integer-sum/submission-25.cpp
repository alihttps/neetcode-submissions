class Solution {
    public:
    std::vector<int> twoSum (std::vector<int> &nums, int target)
    {
        std::unordered_map<int, int> mem;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (mem.find(target - nums[i]) != mem.end())
                return {mem[target - nums[i]], i};
            
            mem[nums[i]] = i;
        }
        return {};
    }
};