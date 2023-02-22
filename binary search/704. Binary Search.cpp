class Solution {
public:
    int search1(vector<int>& nums, int target){
        int lo = 0,hi = nums.size() - 1,mid;
        while(lo <= hi){
            mid = lo + ((hi - lo) >> 1);
            if(nums[mid] > target) hi = mid - 1;
            else if(nums[mid] < target) lo = mid + 1;
            else return mid; 
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int index = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        return index >= nums.size() || nums[index] != target  ? -1 : index;
    }
};


