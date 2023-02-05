class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size() || s.empty() || t.empty()) return false;
        int arr[26] = {0};
        int arr1[26] = {0};
        for(int i=0;i<s.size();i++){
            arr[s[i] - 'a'] ++;
            arr1[t[i] - 'a'] ++;
        }
        for(int i=0;i<26;i++) if(arr[i] != arr1[i]) return false;
        return true;
    }
};
