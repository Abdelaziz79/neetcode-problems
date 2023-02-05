class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();++i){
            int t = target - nums[i];
            if(map.count(t)){
                res[0] = i;
                res[1] = map[t];
            }
            map[nums[i]] = i; 
        }
        return res;
    }
};
