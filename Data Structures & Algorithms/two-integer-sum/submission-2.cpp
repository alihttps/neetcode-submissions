class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::vector<int> sol;
        std::vector<int>::iterator it = nums.begin();
        for(; it != nums.end(); ++it)
        {
            for(std::vector<int>::iterator it2 = nums.end() - 1; it2 != nums.begin(); --it2)
            {
                if (it != it2 && *it + *it2 == target)
                {
                    sol.push_back(it - nums.begin());
                    sol.push_back(it2 - nums.begin());
                    return sol;
                }
            }
        }
        return sol;
    }
};
