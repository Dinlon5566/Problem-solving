class Solution
{
public:
    bool searchLine(vector<vector<char>> &board, int i, int j, string word, int n)
    {
        if (n >= word.size())
        {
            return true;
        }
        if (i >= 0 && j >= 0 && i < board.size() && j < board[0].size() && board[i][j] == word[n])
        {
            char Oc=board[i][j];
            board[i][j]='\0';
            if(searchLine(board, i - 1, j, word, n + 1) ||
                    searchLine(board, i + 1, j, word, n + 1) ||
                    searchLine(board, i, j - 1, word, n + 1) ||
                    searchLine(board, i, j + 1, word, n + 1))
            {
                return true;
            }
            board[i][j]=Oc;
        }
        return false;
    }
    bool exist(vector<vector<char>> &board, string word)
    {

        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                if (searchLine(board, i, j, word, 0))
                    return 1;

        return 0;
    }
};
