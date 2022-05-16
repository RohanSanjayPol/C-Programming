#include <stdio.h>

char board[3][3] = {'1','2','3','4','5','6','7','8','9'};
int choice;
char turn = 'X';

void display(){
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkWin(){
    // rows
    for(int i=0;i<3;i++)
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
            return 1;
    // cols
    for(int i=0;i<3;i++)
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return 1;
    // diagonals
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return 1;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return 1;
    return 0;
}

void makeMove(int choice){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==choice+'0'){
                board[i][j]=turn;
                return;
            }
        }
    }
}

int main(){
    int win=0, moves=0;
    while(win==0 && moves<9){
        display();
        printf("player %c, enter your move: ", turn);
        scanf("%d",&choice);
        makeMove(choice);
        moves++;
        if(checkWin()){
            display();
            printf("player %c wins!\n",turn);
            win=1;
            break;
        }
        turn = (turn=='X') ? 'O' : 'X';
    }
    if(win==0)
        printf("draw game!\n");
    return 0;
}
