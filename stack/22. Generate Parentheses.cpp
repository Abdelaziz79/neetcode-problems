class Solution {
    vector<string> res;
    string s = "";
public:
    void backTracking(int open,int close,int n,string & s){
        if(open == close && open == n){
            res.push_back(s);
        }
        if(open < n){
            backTracking(open + 1,close,n,s+='(');
            s.pop_back();
        }
        if(close < open){
            backTracking(open,close + 1,n,s+=')');
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        backTracking(0,0,n,s);
        return res;
    }
};
