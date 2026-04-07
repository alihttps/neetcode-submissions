class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> mem;
        int l = 0;
        int r = 0;
        int max_len = 0;

        while (r < s.size()) 
        {
            if (mem.find(s[r]) == mem.end()) {
                mem.insert(s[r]);
                r++;
                max_len = std::max(max_len, (int)mem.size());
            } 
            else 
            {
                mem.erase(s[l]);
                l++;
            }
        }
        return max_len;
    }
};
