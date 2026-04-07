class Solution {
public:
    std::vector<std::vector<int> > threeSum(std::vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> res;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i - 1] && i > 0)
                continue;
            
            int target = -nums[i];
            int L = i + 1;
            int R = nums.size() - 1;
            while (L < R)
            {
                
                if ((nums[L] + nums[R]) < target)
                    L++;
                else if ((nums[L] + nums[R]) > target)
                    R--;
                else
                {
                    res.push_back({nums[i], nums[L], nums[R]});
                    while (nums[L] == nums[L + 1] && L < nums.size() - 1)
                        L++;
                    while (nums[R] == nums[R - 1] && R > 0)
                        R--;
                L++;
                R--;
                }
            }
        }
        return res;
    }
};
