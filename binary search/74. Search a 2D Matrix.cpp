class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &v : matrix)
            if(binarySearch(v,target)) return true;
        return false;
    }
    bool binarySearch(vector<int>&nums,int t){
        int l=0,r = nums.size() - 1,mid;
        while(l<=r){
            mid = l + (r - l >> 1);
            if(nums[mid] == t) return true;
            else if(nums[mid] > t) r = mid - 1;
            else l = mid + 1;
        }
        return false;
    }
};
