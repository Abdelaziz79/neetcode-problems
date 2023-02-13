class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size() - 1;
        int res = 0;
        int area;
        while(left < right){
            area = (right - left) * min(height[left],height[right]);
            res = max(area,res);
            if(height[left] < height[right])
                left ++;
            else right --;
        }
        return res;
    }
};
