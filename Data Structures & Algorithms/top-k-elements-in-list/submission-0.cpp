class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        std::unordered_map<int, int> mem;
        std::vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            mem[nums[i]]++;
        }
        std::unordered_map<int, int>::iterator it;
        for (int i = 0; i < k; ++i)
        {
            int top = 0;
            int key;
            for (it = mem.begin(); it != mem.end(); ++it)
            {
                if (it->second > top)
                {
                    top = it->second;
                    key = it->first;
                }
            }
            mem[key] = 0;
            res.push_back(key);
        }
        return res;
    }
};
