class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> s;
        int sz = temperatures.size();
        vector<int> ans(sz);
        s.push(0);
        for(int i = 1;i<sz;i++){
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
                int j = s.top();
                s.pop();
                ans[j] = i - j;
            }
            s.push(i);   
        }

        return ans;
    }
};
