#include<iostream>
#include<vector>
using namespace std;
class Solution {
    int m, n;
    bool is_found(vector<vector<char>> &board, const char *word, int x, int y)
    {
        if (x < 0 || x >= m || y < 0 || y >= n || board[x][y] == '\0' || *word != board[x][y])
            return false;
        if (*(word+1) == '\0')
            return true;
        char tmp = board[x][y];
        board[x][y] = '\0';
        if (is_found(board, word+1, x+1, y) ||
            is_found(board, word+1, x-1, y) ||
            is_found(board, word+1, x, y+1) ||
            is_found(board, word+1, x, y-1))
            return true;
        board[x][y] = tmp;
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (is_found(board, word.c_str(), i, j))
                    return true;
            }
        }
        return false;
    }
};

void test(string test_name, vector<vector<char>> &board, string word, bool expected)
{
    Solution s;
    if (s.exist(board, word) == expected) {
        cout << test_name << " success." << endl;
    } else {
        cout << test_name << " failed." << endl;
    }
}

int main()
{
    vector<vector<char>> board1 = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word1 = "ABCCED";
    bool expected1 = true;
    test("test1", board1, word1, expected1);

    vector<vector<char>> board2 = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word2 = "SEE";
    bool expected2 = true;
    test("test2", board2, word2, expected2);

    vector<vector<char>> board3 = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word3 = "ABCB";
    bool expected3 = false;
    test("test3", board3, word3, expected3);

    return 0;
}
