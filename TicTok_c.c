#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void start_help();
void chois ();
void shure();
void board();
void play_again();

char players1,players2,p_again[10];
int main()
{
    int j;
    start_help();
    for(j=0;j<=3;j++){
        printf("\n");}
    chois();
    shure();
    do{
    board();
    play_again();
}while(strcmp(p_again,"No")!=0);

    return 0;
}





void chois (){

    printf("\n");
    printf("Players1:Do you want to be X or O?\t");
    scanf("%c",&players2);

        if(players2=='x'||players2=='X'){
            players1='O';
        }
        if(players2=='o'||players2=='O'){
            players1='X';
        }



}






void shure(){
    char choix[10];
        printf("players1:will go first.\n");
        do{
        printf("Are you ready to play? Enter Yes or No.\n");
        scanf("%s",choix);}
        while(strcmp(choix,"No")!=0&&strcmp(choix,"Yes")!=0);
        if(strcmp(choix,"No")==0){
            printf("Game over!");
         }else{
         board();}
}




void board(){
    char board [3][3]={{},{},{},{},{},{},{},{},{}};
    int position,position2,i=0;
    while(i!=5){
    printf("\nChose your next position:(1-9)  ");
    scanf("%d",&position);
        if(position==1){
            board[2][0]=players2;
        }if(position==2){
            board[2][1]=players2;
        }if(position==3){
            board[2][2]=players2;
        }if(position==4){
            board[1][0]=players2;
        }if(position==5){
            board[1][1]=players2;
        }if(position==6){
            board[1][2]=players2;
        }if(position==7){
            board[0][0]=players2;
        }if(position==8){
            board[0][1]=players2;
        }if(position==9){
            board[0][2]=players2;
        }


    printf("\n%c | %c | %c",board[0][0],board[0][1],board[0][2]);
    printf("\n%c | %c | %c",board[1][0],board[1][1],board[1][2]);
    printf("\n%c | %c | %c",board[2][0],board[2][1],board[2][2]);


        if((board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')||(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O')||(board[2][2]=='O'&&board[1][2]=='O'&&board[0][2]=='O')||(board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O')||(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O')||(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')||(board[2][0]=='O'&&board[1][1]=='O'&&board[0][2]=='O')||(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'))
                {
            printf("\nYou win!");
            break;

        }
        if((board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')||(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')||(board[2][2]=='X'&&board[1][2]=='X'&&board[0][2]=='X')||(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')||(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')||(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')||(board[2][0]=='X'&&board[1][1]=='X'&&board[0][2]=='X')||(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'))
                {
            printf("\nYou win!");
            break;

        }

        printf("\nChose your next position:(1-9)  ");
    scanf("%d",&position2);
        if(position2==1){
            board[2][0]=players1;
        }if(position2==2){
            board[2][1]=players1;
        }if(position2==3){
            board[2][2]=players1;
        }if(position2==4){
            board[1][0]=players1;
        }if(position2==5){
            board[1][1]=players1;
        }if(position2==6){
            board[1][2]=players1;
        }if(position2==7){
            board[0][0]=players1;
        }if(position2==8){
            board[0][1]=players1;
        }if(position2==9){
            board[0][2]=players1;
        }


    printf("\n%c | %c | %c",board[0][0],board[0][1],board[0][2]);
    printf("\n%c | %c | %c",board[1][0],board[1][1],board[1][2]);
    printf("\n%c | %c | %c",board[2][0],board[2][1],board[2][2]);

        if((board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')||(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O')||(board[2][2]=='O'&&board[1][2]=='O'&&board[0][2]=='O')||(board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O')||(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O')||(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')||(board[2][0]=='O'&&board[1][1]=='O'&&board[0][2]=='O')||(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'))
                {
            printf("\nYou win!");
            break;

        }
        if((board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')||(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')||(board[2][2]=='X'&&board[1][2]=='X'&&board[0][2]=='X')||(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')||(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')||(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')||(board[2][0]=='X'&&board[1][1]=='X'&&board[0][2]=='X')||(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'))
                {
            printf("\nYou win!");
            break;

        }




    i++;
}
return;
}




void play_again(){
    printf("\n ********************Do you want play again?**********************\n");
    printf("Yes Tape:Yes\nNo  Tape:No \n");
    scanf("%s",p_again);

}





void start_help(){
    int i;
    printf("              -----------------***Welcome to tec tac toe!***----------------- \n");
    printf("\n");
    printf("*********************************************************");
    printf("\n*       _--------_How to play__--------_                *");
    printf("\n*                                                       *");
    printf("\n*   1) Chose X or O  .                                  *");
    printf("\n*                                                       *");
    printf("\n*   2) Chose numbers (1-9).                             *");
    printf("\n*                                                       *");
    printf("\n*          7 | 8 | 9                                    *");
    printf("\n*          4 | 5 | 6                                    *");
    printf("\n*          1 | 2 | 3                                    *");
    printf("\n*                                                       *");
    printf("\n*   2) Enjoy!!!.                                        *");


    for(i=0;i<=1;i++){
        printf("\n*                                                       *");}
        printf("\n*********************************************************");







}
