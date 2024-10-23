class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    bool testWin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true;//�W�����
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true;//�������
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true;//�U�����
        //�A�ӬO����
        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true;//������
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true;//������
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true;//�k����
        //�׹﨤
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true;//���W�k�U
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true;//���U�k�W
        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};
        int now=1;

        for(auto move : moves){
            int i = move[0],j = move[1];
            board[i][j]=now;

            if(testWin(board,now)){
                if(now==1) return "A";
                else return "B";
            }
            now=3-now;
        }
        if(moves.size()==9) return "Draw";//����9�B,����
        else return "Pending";
    }
};
