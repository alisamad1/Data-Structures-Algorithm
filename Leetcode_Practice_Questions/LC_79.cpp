#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
public:
    int m; 
    int n;
    vector<vector<char>> board;
    string word; 
    bool backtrack(int i, int j ,int k){
        if(k == word.length()){
            return true;
        }
        if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[k]){
            return false;
        }
        char temp = board[i][j];
        board[i][j] = '\0';
        bool found = backtrack(i + 1, j, k + 1) || backtrack(i - 1, j , k + 1) || backtrack(i, j + 1,  k + 1) || backtrack(i , j - 1, k + 1);
        board[i][j] = temp;
        return found;
    }
    bool exist(vector<vector<char>> board, string word){
        this-> m = board.size();
        this-> n = board[0].size(); 
        for(int i = 0 ; i < m; i++){
            for(int j = 0; j < n; j++){
                if(backtrack(i , j , 0)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    Solution sol;
    string word = "ABCCED";
    if(sol.exist(board, word)){
        cout << "The elements are present in the board" << endl;
    }
    else{
        cout << "The element are not present in the board" << endl;
    }
    return 0;
}
