class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> map;
        for(auto str:strs){
            vector<int> arr(26);
            for(auto s:str) arr[s - 'a']++;
            map[arr].push_back(str);
        }
        vector<vector<string>> res;
        for(auto word:map) res.push_back(word.second);
        return res;
    }
};
