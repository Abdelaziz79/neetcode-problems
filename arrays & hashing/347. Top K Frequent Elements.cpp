class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int>res;
    int sz = nums.size();
    unordered_map<int,int>map;
    vector<vector<int>>freq(sz+1);
    
    for(auto num:nums) map[num]++; 
    for(auto num:map) freq[num.second].push_back(num.first);
    
    for(int i=sz;i>=0 && k;i--){
        while(!freq[i].empty()){    
            res.push_back(freq[i][freq[i].size()-1]);
            freq[i].pop_back();
            k--;
        }  
    }

    return res;
    }
};
