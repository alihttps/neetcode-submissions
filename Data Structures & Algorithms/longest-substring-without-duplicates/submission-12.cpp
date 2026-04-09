class Solution {
public:
    int len(bool (&arr)[128])
    {
        int i = 0;
        int len = 0;
        while (i < 128)
        {
            if (arr[i] == true)
                len++;
            i++;
        }
        return len;
    }
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
                int length = len(exist);
                max_len = std::max(max_len, length);
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
