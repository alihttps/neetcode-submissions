class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.size() != t.size())
            return false;
        std::unordered_map<int , int> mem;
        int freq = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            mem[s[i]]++;
        }
        for(int i = 0; i < t.size(); ++i)
        {
            if (mem.find(t[i]) == mem.end())
                return false;
            
            mem[t[i]]--;

            if (mem[t[i]] < 0)
                return false;
        }
        return true;
    }
};
