class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(nums.size());
        vector<int>postfix(nums.size());
        for(int i=0,j=nums.size()-1;i<nums.size()&&j>=0;i++,j--){
            if(i==0 && j==nums.size()-1){
                prefix[i] = nums[i];
                postfix[j] = nums[j];
            }else{
                prefix[i] =nums[i] * prefix[i-1];
                postfix[j] =nums[j] * postfix[j+1];
            } 
        }
        vector<int>ans(nums.size());

        for(int i=0;i<nums.size();i++){
            if(i-1 == -1) ans[i] = postfix[i+1];
            else if(i+1 == nums.size()) ans[i] = prefix[i-1];
            else ans[i] = prefix[i-1] * postfix[i+1];
        }
        return ans;
    }
};
