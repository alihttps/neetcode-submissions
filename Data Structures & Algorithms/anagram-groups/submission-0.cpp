class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        std::vector<std::vector<std::string>> res;
        std::unordered_map<std::string, std::vector<std::string>> mem;
        std::vector<std::string>::iterator it;

        for(it = strs.begin(); it != strs.end(); ++it)
        {
            std::string sortedstr = *it;
            std::sort(sortedstr.begin(), sortedstr.end());
            mem[sortedstr].push_back(*it);
        }
        std::unordered_map<std::string, std::vector<std::string>>::iterator it2;
        for(it2 = mem.begin(); it2 != mem.end(); ++it2)
        {
            res.push_back(it2->second);
        }
        return res;
    }
};
