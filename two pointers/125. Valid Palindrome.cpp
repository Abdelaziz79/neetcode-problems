class Solution {
public:
    bool check(char c){
        if((c >= 48 && c <= 57)||(c >= 97 && c <= 122)) return true;
        return false;
    }
    bool isPalindrome(string s) {
        int l = 0,r = s.size()-1;
        while( l < r){
            if(check(tolower(s[l])) && check(tolower(s[r]))){
                if(tolower(s[l]) != tolower(s[r])) return false;
                l++;
                r--;
            }
            if(!check(tolower(s[l]))) l++;
            if(!check(tolower(s[r]))) r--;
        }
        return true;
    }
};
