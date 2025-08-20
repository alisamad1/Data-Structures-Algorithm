#include<iostream>
#include<vector>
using namespace std;
vector<vector<string>> result;
bool isValid(vector<string>& board, int row, int col){
    // checking for the row
    for(int i = 0 ; i < row ; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    //checking it for upper left diagonal
    for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--; j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    //checking it for the upper right diagonal
    for(int i = row-1, j = col+1; i >= 0 && j <= board.size(); i--; j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}
void solve(vector<string>& board, int row){
    if(row == board.size()){
        result.push_back(board);
        return;
    }
    for(int col = 0 ; col < board.size(); col++){
        if(isValid(board, row, col)){
            board[row][col] = 'Q';
            solve(board, row+1);
            board[row][col] = '.';
        }
    }
}
vector<string> solveNQueens(int n){
    result.clear();
    vector<string> board(n, string(n,'.'));
    solve(board, 0);
    return result;
}
int main() {
    int n = 4;
    vector<vector<string>> res = solveNQueens(n);
    for (const auto& board : res) {
        for (const auto& row : board) {
            cout << row << endl;
        }
        cout << "--------" << endl;
    }
    return 0;
}

