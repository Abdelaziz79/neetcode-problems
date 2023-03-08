class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz = nums.size();
        int pivotIndex = pivot(nums);
        if(nums[pivotIndex] == target) return pivotIndex;
        int l,r;
        if(nums[sz - 1] < target){
            l = 0;
            r = pivotIndex;
        }
        else {
            l = pivotIndex;
            r = sz - 1;
        }
        return bs(nums,l,r,target);
    }
    int bs(vector<int>& nums,int l,int r,int t){
        while(l<=r){
            int mid = l + (r - l)/2;
            if(nums[mid] == t) return mid;
            else if(nums[mid] > t) r = mid - 1;
            else l = mid + 1;
        }
        return -1;
    }
    int pivot(vector<int>& nums){
        int l = 0,r = nums.size() - 1,mid;
        while(l<r){
            mid = l + (r - l)/2;
            if(nums[mid] > nums[r]) l = mid + 1;
            else r = mid;
        }
        return l; 
    }
};

