class Solution {
public:
    int lengthOfLongestSubstring(string word) {
        string s = "";
        int res = 0;
        for(auto ch:word){
            while(s.find(ch) < s.size()){
                s = s.substr(1);
            }
            s += ch;
            int sz = s.size();
            res = max(res,sz);
        }
        return res;    
    }
};
