class Solution {
public:
    bool equal (char c1, char c2)
    {
        return (c1 == c2) || (c1 >= 'a' && c1 <= 'z' && c2 >= 'A' && c2 <= 'Z' && c1 - 32 == c2) || (c1 >= 'A' && c1 <= 'Z' && c2 >= 'a' && c2 <= 'z' && c1 + 32 == c2);
    }
    bool isPalindrome(string s) 
    {
        std::vector<char> vect;
        for(int i = 0; i != s.size(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            vect.push_back(s[i]);
        }
        int middle = vect.size();
        int end = vect.size() - 1;
        int i = 0;
        while(i != middle)
        {
            if (!equal(vect[i], vect[end]))
                return false;
            i++;
            end--;
        }
        return true;
    }
};
