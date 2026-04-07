class Solution {
public:

    string encode(vector<string>& strs) 
    {
        ostringstream oss;
        for(int i = 0; i < strs.size(); i++)
        {
            oss <<  strs[i] << char(0xAC);
        }
        return oss.str();
    }

    std::vector<std::string> decode(std::string s) 
    {
        std::vector<std::string> res;
        std::string seg;
        std::istringstream iss(s);
        while (std::getline(iss, seg, char(0xAC)))
        {
            res.push_back(seg);
        }
        return res;
    }
};
