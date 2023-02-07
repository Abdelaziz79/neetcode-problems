class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        int sum = 0;
        vector<int> ans;
        while(left < right){
            sum = numbers[left] + numbers[right];
            if( sum == target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            else if(sum > target) right --;
            else left ++;
        }
        return ans; 
    }
};

