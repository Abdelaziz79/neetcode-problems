class Solution {
public:
    bool arePair(char& f,char& l){
        if(f == '}' && l == '{') return true;
        if(f == ')' && l == '(') return true;
        if(f == ']' && l == '[') return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> stack1;
        for(auto &c:s){
            if(c == '{' || c == '[' || c == '(') stack1.push(c);
            else if(!stack1.empty() && arePair(c,stack1.top())) stack1.pop();
            else return false;
        }
        return stack1.empty();
    }
};
