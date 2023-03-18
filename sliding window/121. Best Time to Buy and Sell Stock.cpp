class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices[0],res = 0;
        
        for(int i = 1;i<prices.size() ;i++){
            if(prices[i] < l) l = prices[i];
            res = max(res,(prices[i] - l));
        }

        return res;
    }
};
