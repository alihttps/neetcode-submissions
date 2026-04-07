class Solution {
public:
    int multiply(std::vector<int>& nums, int index) 
    {
        int res = 1;
        for (int i = 0; i < index; i++)
        {
            res = res * nums[i];
        }
        for (int i = index + 1; i < nums.size(); i++)
        {
            res = res * nums[i];
        }
        return res;     
    }
    std::vector<int> productExceptSelf(std::vector<int>& nums) 
    {
        std::vector<int> res(nums.size(), 1);
        for (int i = 0; i < nums.size(); i++)
        {
            res[i] = multiply(nums, i);
        }
        return res;
    }
};
