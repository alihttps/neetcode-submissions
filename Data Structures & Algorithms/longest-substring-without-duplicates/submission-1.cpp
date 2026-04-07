class Solution {
public:
   int lengthOfLongestSubstring(std::string s) 
    {
        if (s.empty())
            return 0;
        std::unordered_map<char, int> mem;
        int max = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (mem.find(s[i]) != mem.end())
                continue;
            mem[s[i]] = i;
        }
        int i = 0;
        while(i < mem.size())
        {
            if (mem[s[i]] + 1 == mem[s[i + 1]])
                max++;
            i++;
        }
        return max;
    }
};
