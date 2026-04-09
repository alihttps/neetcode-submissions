class Solution {
public:
    int findMin(vector<int> &nums) 
    {
        int l = 0;
        int m;
        int r = nums.size() - 1;
        while (l < r)
        {
            m = (r + l)/ 2;
            if (nums[r] < nums[m])
                l = m + 1;
            else
                r = m;
        }
        return nums[l];
    }
};
