class Solution {
    public:
    bool isValidSudoku(vector<vector<char>>& board) {
    
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    map<pair<char, int>, int> m;

    for (int i = 0; i < board.size(); i++)
    {
        unordered_map<char, int> r;
        unordered_map<char, int> c;
        for (int j = 0; j < board[0].size(); j++)
        {
            r[board[i][j]]++;
            c[board[j][i]]++;

            int boxNum = arr[i / 3][j / 3];
            
            if (r[board[i][j]] > 1 && board[i][j] != '.') return false;
            if (c[board[j][i]] > 1 && board[j][i] != '.') return false;

            if(board[i][j]!='.'){
                m[{board[i][j], boxNum}]++;
                if (m[{board[i][j], boxNum}] > 1) return false;
            }
        }
    }
    
    return true;
    
    }

};
