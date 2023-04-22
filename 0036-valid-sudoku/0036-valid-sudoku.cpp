class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[10]= {0};
        int column[10]= {0};
        int threeBox[10]= {0};
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j]!='.') {
                    rows[board[i][j]-'0']++;
                }
                if(i%3 == 0 && j%3 ==0) {
                    for(int b1=0; b1<3; b1++) {
                        for(int b2=0; b2<3; b2++) {
                            if(board[i+b1][j+b2]!='.') {
                                threeBox[board[i+b1][j+b2]-'0']++;
                            }
                        }
                    }
                    for(int k=1; k<=9; k++) {
                        if(threeBox[k]>1) {
                            return false;
                        } else {
                            threeBox[k]=0;
                        }
                    }
                }
            }

            for(int j=0; j<9; j++) {
                if(board[j][i]!='.') {
                    column[board[j][i]-'0']++;
                }
            }
            for(int j=1; j<=9; j++) {

                if(rows[j]>1 || column[j]>1) {
                    return false;
                } else {
                    rows[j] = 0;
                    column[j]=0;
                }
            }
        }
        return true;

    }
};
