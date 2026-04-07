class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int L = 0;
        int R = heights.size() - 1;
        int volume = 0;
        int max = 0;
        while (L < R)
        {
            volume = (R - L) * std::min(heights[L], heights[R]);
            max = std::max(max, volume);
            if (heights[L] > heights[R])
                R--;
            else
                L++;
        }
        return max;
    }
};
