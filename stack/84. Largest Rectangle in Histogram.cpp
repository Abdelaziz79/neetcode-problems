class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> stack;
        int sz = heights.size();
        int start;
        int maxArea = 0;
        for(int i=0;i<sz;i++){
            start = i;
            while(!stack.empty() && stack.top().first > heights[i]){
                auto top = stack.top();
                stack.pop();
                maxArea = max(maxArea,top.first * (i - top.second));
                start = top.second;   
            }
            stack.push({heights[i],start});
        }
        while(!stack.empty()){
            auto top = stack.top();
            stack.pop();
            maxArea = max(maxArea,top.first * (sz - top.second));
        }
        return maxArea;
    }
};
