class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for(auto &c:tokens){
            if(c == "+" || c == "-" || c == "*" || c == "/" ){
                int sec = stack.top();
                stack.pop();
                int fir = stack.top();
                stack.pop();
                if(c == "+") stack.push(fir + sec);
                if(c == "-") stack.push(fir - sec);
                if(c == "*") stack.push(fir * sec);
                if(c == "/") stack.push(fir / sec);
            }
            else stack.push(stoi(c));
        }
        return stack.top();
    }
};
