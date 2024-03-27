#include <iostream>
using namespace std;

void initializeBoard(char board[3][3]){
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            board[i][j]=' ';
        }
    }
}

void displayBoard(const char board[3][3]){
     cout<<"-------------\n"; 
    for(int i = 0; i < 3; i++){ 
        cout<<"| "; 
        for(int j = 0; j < 3; j++){ 
            cout<<board[i][j]<<" | "; 
        } 
        cout<<"\n-------------\n"; 
    } 
}

bool checkWin(const char board[3][3],char player){
    for(int i = 0; i < 3; ++i){
        if((board[i][0] == player && board[i][1] == player && board[i][2]== player)||
            (board[0][i]==player && board[1][i] ==player && board[2][i]== player)){
            return true;
        }
    }
    if((board[0][0] ==player&& board[1][1] ==player && board[2][2] == player)||
        (board[0][2]== player&& board[1][1]==player && board[2][0] == player)){
        return true;
    }
    return false;
}

bool checkDraw(const char board[3][3]){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(board[i][j]==' ')
                return false;
        }
    }
    return true;
}

bool isValidMove(const char board[3][3],int row,int col) {
    if(board[row][col]==' ')
       { return true;}
    return false;
}


int main() {
    char board[3][3];
    char currentPlayer='X';
    bool gameWon= false;
    bool gameDraw= false;
    char playAgain;
	cout<<"--------WELCOME TO TIC-TAC-TOE GAME--------\n";
    do {
        initializeBoard(board);

        do {
            
            displayBoard(board);
            int row,col;
            cout<<"Player "<<currentPlayer<<"'s turn. Enter row and column (0-2): ";
            cin>>row>>col;
            
        if(isValidMove(board, row, col)){
                board[row][col] =currentPlayer;
                gameWon=checkWin(board,currentPlayer);
                gameDraw=checkDraw(board);
                currentPlayer=(currentPlayer=='X') ? 'O' : 'X';
            } else {
                cout<<"Invalid move. Please try again."<<endl;
            }
        } while(!gameWon && !gameDraw);
        
        displayBoard(board);

        if (gameWon)
            cout<<"Player "<<currentPlayer<<" wins!"<<endl;
        else
            cout<<"It's a draw!"<<endl;
        cout<<"Do you want to play again? (Y/N): ";
        cin>>playAgain;
		}
	while(playAgain=='Y' || playAgain=='y');
	
	return 0;
}
