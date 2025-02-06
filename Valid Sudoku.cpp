class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool res=true;
        char c = '.';
        for(int i=0;i<board[i].size();i++){
            map<char, int> check;
            for(int j=0;j<board[i].size();j++){
                check.erase('.');
                if(check.find(board[i][j]) == check.end()){
                    check.insert(make_pair(board[i][j], 1));
                } else {
                    res = false;                    
                    //printf("%c", board[i][j]);
                    return res;
                }                
            }            
        }
        for(int i=0;i<board[i].size();i++){
            map<char, int> check;
            for(int j=0;j<board[i].size();j++){
                check.erase('.');
                if(check.find(board[j][i]) == check.end()){
                    check.insert(make_pair(board[j][i], 1));
                } else {
                    res = false;
                    //printf("%c", board[j][i]);
                    return res;
                }
            }            
        }
        for(int i=0;i<board[i].size();i++){
            map<char, int> check;
            for(int j=0;j<board[i].size();j++){
                check.erase('.');
                int box1 = floor(i/3) * 3 + floor(j/3);
                int box2 = 3*(i%3)+(j%3);
                if(check.find(board[box1][box2]) == check.end()){
                    check.insert(make_pair(board[box1][box2], 1));
                } else {
                    res = false;
                    return res;
                }
            }
        }
        return res;
    }
};