class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> set;
        for(int i=0;i< n - 1;i++){
            int left = i + 1, right = n - 1, sum = 0;
            while(left < right){
                sum = nums[i] + nums[left] + nums[right];
                if(sum == 0 ){
                    set.insert({nums[i] , nums[left] , nums[right]});
                    left ++;
                    right --;
                }
                else if(sum > 0) right --;
                else left ++;
            }
        }
        for(auto tr:set) res.push_back(tr);
        return res;
    }
};
