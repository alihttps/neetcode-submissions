class Solution {
public:
    int characterReplacement(std::string s, int k) 
    {
        int r = 0;
        int l = 0;
        int maxfreq = 0;
        int max = 0;
        std::unordered_map<char, int> mem;

        while (r < s.size())
        {
            mem[s[r]]++;
            maxfreq = std::max(maxfreq, mem[s[r]]);

            if ((r - l + 1) - maxfreq > k)
            {
                mem[s[l]]--;
                l++;
            }
            max = std::max(max, (r - l + 1));
            r++;
        }
        return max;
    }
};
 