class Solution {
public:
    int getNumber(string str) {
        int i = pow(10, str.size() - 1);
        int res = 0;
        for (auto s: str) {
            res += (int) (s - '0') * i;
            i /= 10;
        }
        return res;
    }

    string subString(string s, int begin, int end) {
        string res = "";
        for (int i = begin; i < end; ++i) {
            res += s[i];
        }
        return res;
    }

    string encode(vector<string> vc) {
        string res = "";
        for (auto &s: vc) {
            res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;
            int len = getNumber(subString(s, i, j));
            res.push_back(subString(s, j + 1, j + len + 1));
            i = j + 1 + len;
        }
        return res;
    }
};

