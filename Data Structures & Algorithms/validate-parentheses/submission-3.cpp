class Solution {
public:
    bool isValid(string s) 
    {
        std::stack<char> stak;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stak.push(s[i]);
            else if ((s[i] == ')' || s[i] == '}' || s[i] == ']') && stak.empty())
                return false;
            else if (s[i] == ')' && stak.top() == '(')
                stak.pop();
            else if (s[i] == '}' && stak.top() == '{')
                stak.pop();
            else if (s[i] == ']' && stak.top() == '[')
                stak.pop();
            else
                return false;
            i++;
        }       
        return stak.empty();
    }
};
