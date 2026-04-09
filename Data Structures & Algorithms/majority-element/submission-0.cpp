class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int max = 0;
        int candidate = nums[0];
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] == candidate)
                max++;
            else
            {
                max--;
                if (max < 0)
                    candidate = nums[i];
            }
            i++;
        }
        return candidate;    
    }
};