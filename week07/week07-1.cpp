//week07-1.cpp
//Leetcode 1275
class Solution {
public:
    void myDrawBoard(int board[3][3]) {
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {};
        int now = 1; //1,2,1,2
        myDrawBoard(board);
        for(auto move : moves){ // Step01: C++�j��
            int i = move[0],j = move[1];
            board[i][j] = 1;
            myDrawBoard(board);

        }
        return "B";// "A" or "B" or "Draw"����
    }
};
