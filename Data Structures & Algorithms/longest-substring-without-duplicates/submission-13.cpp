class Solution {
public:

    int lengthOfLongestSubstring(std::string s) 
    {
        bool exist[128] = {false};
        int l = 0;
        int r = 0;
        int max_len = 0;

        while (r < s.size())
        {
            if (!exist[(int)s[r]])
            {
                exist[(int)s[r]] = true;
                max_len = std::max(max_len, r - l + 1);
                r++;
            }
            else
            {
                while (exist[(int)s[r]])
                {
                    exist[(int)s[l]] = false;
                    l++;
                }
            }
        }
        return max_len;
    }
};
