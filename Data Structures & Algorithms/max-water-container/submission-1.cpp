class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxh = 0, st = 0, end = heights.size() - 1;
        while(st <= end){
            int volume = min(heights[st], heights[end]) * (end - st);
            maxh = max(maxh, volume);
            if(heights[st] < heights[end]) st++;
            else end--;            
        }
        return maxh;
    }
};
