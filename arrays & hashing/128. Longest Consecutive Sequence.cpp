class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> map;
        for(auto &num:nums) map[num] = true;
        int maxi = 0;
        int sz = nums.size();
        for(int i=0;i<sz;++i){
            if(!map[nums[i] - 1]){
                int length = 0;
                while(map[nums[i] + length]) length++;
                maxi = max(length,maxi);
            }
        }
        return maxi;
    }
};
