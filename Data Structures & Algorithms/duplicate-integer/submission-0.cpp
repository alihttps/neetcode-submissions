class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) 
    {
        std::vector<int> set;
        for (std::vector<int>::iterator it = nums.begin(); it < nums.end(); ++it)
        {
            if(set.empty())
            {
                set.push_back(*it);
                continue;
            }
            if (std::find(set.begin(), set.end(), *it) == set.end())
            {
                set.push_back(*it);
            }
            else
                return true;
        }
        return false;
    }
};