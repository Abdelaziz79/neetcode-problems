class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int sz = position.size();
        vector<pair<int,int>> vc(sz);
        for(int i=0;i<sz;i++) vc[i] = {position[i],speed[i]};
        sort(vc.begin(),vc.end());
        stack<double> s;
        for(int i = sz - 1 ;i >= 0;i--){
            auto car = vc[i];
            double sp = (double) (target - car.first) / car.second;
            s.push(sp);
            if(s.size() >= 2 && s.top() <= *(&s.top() - 1) ) s.pop();
         
        }
        return s.size();
    }
};

