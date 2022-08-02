// runs a set amount of tic-tac-toe games starting from the corner
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int checkW(int boardW[3][3])
{

    int r = 0;
    if(boardW[0][0] == 1 && boardW[0][1] == 1 && boardW[0][2] == 1){
        r = 1; return r; r = 0;}else
    if(boardW[1][0] == 1 && boardW[1][1] == 1 && boardW[1][2] == 1){
        r = 1; return r; r = 0;}else
    if(boardW[2][0] == 1 && boardW[2][1] == 1 && boardW[2][2] == 1){
        r = 1; return r; r = 0;}else
    if(boardW[0][0] == 1 && boardW[1][0] == 1 && boardW[2][0] == 1){
        r = 1; return r; r = 0;}else
    if(boardW[0][1] == 1 && boardW[1][1] == 1 && boardW[2][1] == 1){
        r = 1; return r; r = 0;}else
    if(boardW[0][2] == 1 && boardW[1][2] == 1 && boardW[2][2] == 1){
        r = 1; return r; r = 0;}else
    if(boardW[0][0] == 1 && boardW[1][1] == 1 && boardW[2][2] == 1){
        r = 1; return r; r = 0;}else
    if(boardW[0][2] == 1 && boardW[1][1] == 1 && boardW[2][0] == 1){
        r = 1; return r; r = 0;}else
        {r = 0; return r;}
}

int checkL(int boardL[3][3])
{
    int r = 0;
    if(boardL[0][0] == 2 && boardL[0][1] == 2 && boardL[0][2] == 2){
        r = 1; return r; r = 0;}else
    if(boardL[1][0] == 2 && boardL[1][1] == 2 && boardL[1][2] == 2){
        r = 1; return r; r = 0;}else
    if(boardL[2][0] == 2 && boardL[2][1] == 2 && boardL[2][2] == 2){
        r = 1; return r; r = 0;}else
    if(boardL[0][0] == 2 && boardL[1][0] == 2 && boardL[2][0] == 2){
        r = 1; return r; r = 0;}else
    if(boardL[0][1] == 2 && boardL[1][1] == 2 && boardL[2][1] == 2){
        r = 1; return r; r = 0;}else
    if(boardL[0][2] == 2 && boardL[1][2] == 2 && boardL[2][2] == 2){
        r = 1; return r; r = 0;}else
    if(boardL[0][0] == 2 && boardL[1][1] == 2 && boardL[2][2] == 2){
        r = 1; return r; r = 0;}else
    if(boardL[0][2] == 2 && boardL[1][1] == 2 && boardL[2][0] == 2){
        r = 1; return r; r = 0;}else
        {r = 0; return r;}
}


int main()
{
    srand((int)time(0));
    int slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9;
    slot1=1; slot2=0; slot3=0; slot4=0; slot5=0; slot6=0; slot7=0; slot8=0; slot9=0;
    int turn2,turn3,turn4,turn5,turn6,turn7,turn8,turn9;
    int board[3][3] = { {slot1, slot2, slot3}, {slot4, slot5, slot6}, {slot7, slot8, slot9}}; //I actually have no idea why I
    int winCounter = 0;                                                                       //didn't put zeros here in array
    int lossCounter = 0;
    int trials;
    cout << "Enter how many trials you want to run (1-10000): "; // Not optomized, takes a while to run if 10000 trials
    cin >> trials;                                                                                          //are done
    cout << endl;

    for (int iList = 0; iList < trials; iList++)
    {
        for(int rList = 0; rList < 1;)
        {
                board[0][1] = 0; //sets all board slots except [0][1] to zero
                board[0][2] = 0; //board[0][0] board[0][1] board[0][2]
                board[1][0] = 0; //board[1][0] board[1][1] board[1][2]       <--- tic-tac-toe board layout
                board[1][1] = 0; //board[2][0] board[2][1] board[2][2]
                board[1][2] = 0;
                board[2][0] = 0; //the turn variable determines where a tic is placed
                board[2][1] = 0; //while the board variables are changed depending on what the slot variables
                board[2][2] = 0;

                turn2 = (rand() % 9) + 2;
                while (turn2==10)
                {
                        turn2 = (rand() % 9) + 2;//random number is where the x or o is placed on this turn
                }

                if(turn2 == 2){board[0][1] = 2; // turn 2
                } else if(turn2==3){board[0][2] = 2;
                } else if(turn2==4){board[1][0] = 2; // 1=X, 2=O, 0= nothing there
                } else if(turn2==5){board[1][1] = 2;
                } else if(turn2==6){board[1][2] = 2;
                } else if(turn2==7){board[2][0] = 2;
                } else if(turn2==8){board[2][1] = 2;
                } else if(turn2==9){board[2][2] = 2;
                }

                turn3 = (rand() % 9) + 2;
                while (turn3==turn2 || turn3 == 10)
                {
                    turn3 = (rand() % 9) + 2;
                }

                if(turn3 == 2){board[0][1] = 1; // turn 3
                } else if(turn3==3){board[0][2] = 1;
                } else if(turn3==4){board[1][0] = 1;
                } else if(turn3==5){board[1][1] = 1;
                } else if(turn3==6){board[1][2] = 1;
                } else if(turn3==7){board[2][0] = 1;
                } else if(turn3==8){board[2][1] = 1;
                } else if(turn3==9){board[2][2] = 1;
                }

                if(board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 0){board[2][0] = 2; turn4=7;} // check block up down
                else if(board[2][0] == 1 && board[1][0] == 1 && board[0][0] == 0){board[0][0] = 2; turn4=1;}
                else if(board[0][0] == 1 && board[2][0] == 1 && board[1][0] == 0){board[1][0] = 2; turn4=4;}
                else if(board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 0){board[2][1] = 2; turn4=8;}
                else if(board[2][1] == 1 && board[1][1] == 1 && board[0][1] == 0){board[0][1] = 2; turn4=2;}
                else if(board[0][1] == 1 && board[2][1] == 1 && board[1][1] == 0){board[1][1] = 2; turn4=5;}
                else if(board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 0){board[2][2] = 2; turn4=9;}
                else if(board[2][2] == 1 && board[1][2] == 1 && board[0][2] == 0){board[0][2] = 2; turn4=3;}
                else if(board[0][2] == 1 && board[2][2] == 1 && board[1][2] == 0){board[1][2] = 2; turn4=6;}

                else if(board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 0){board[0][2] = 2; turn4=3;} // check block left right
                else if(board[0][2] == 1 && board[0][1] == 1 && board[0][0] == 0){board[0][0] = 2; turn4=1;}
                else if(board[0][0] == 1 && board[0][2] == 1 && board[0][1] == 0){board[0][1] = 2; turn4=2;}
                else if(board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 0){board[1][2] = 2; turn4=6;}
                else if(board[1][2] == 1 && board[1][1] == 1 && board[1][0] == 0){board[1][0] = 2; turn4=4;}
                else if(board[1][0] == 1 && board[1][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn4=5;}
                else if(board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 0){board[2][2] = 2; turn4=9;}
                else if(board[2][2] == 1 && board[2][1] == 1 && board[2][0] == 0){board[2][0] = 2; turn4=7;}
                else if(board[2][0] == 1 && board[2][2] == 1 && board[2][1] == 0){board[2][1] = 2; turn4=8;}

                else if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 0){board[2][2] = 2; turn4=9;} // check for needed block diagonal
                else if(board[2][2] == 1 && board[1][1] == 1 && board[0][0] == 0){board[0][0] = 2; turn4=1;}
                else if(board[0][0] == 1 && board[2][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn4=5;}
                else if(board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 0){board[0][2] = 2; turn4=3;}
                else if(board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 0){board[2][0] = 2; turn4=7;}
                else if(board[2][0] == 1 && board[0][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn4=5;}
                else{

                    turn4 = (rand() % 9) + 2;
                    while (turn4==turn2 || turn4==turn3 || turn4 == 10)
                    {
                        turn4 = (rand() % 9) + 2;
                    }

                    if(turn4 == 2){board[0][1] = 2; // turn 4
                    } else if(turn4==3){board[0][2] = 2;
                    } else if(turn4==4){board[1][0] = 2;
                    } else if(turn4==5){board[1][1] = 2;
                    } else if(turn4==6){board[1][2] = 2;
                    } else if(turn4==7){board[2][0] = 2;
                    } else if(turn4==8){board[2][1] = 2;
                    } else if(turn4==9){board[2][2] = 2;
                    }
                }

                if(board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 0){board[2][0] = 1; turn5=7;} // check Win up down
                else if(board[2][0] == 1 && board[1][0] == 1 && board[0][0] == 0){board[0][0] = 1; turn5=1;}
                else if(board[0][0] == 1 && board[2][0] == 1 && board[1][0] == 0){board[1][0] = 1; turn5=4;}
                else if(board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 0){board[2][1] = 1; turn5=8;}
                else if(board[2][1] == 1 && board[1][1] == 1 && board[0][1] == 0){board[0][1] = 1; turn5=2;}
                else if(board[0][1] == 1 && board[2][1] == 1 && board[1][1] == 0){board[1][1] = 1; turn5=5;}
                else if(board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 0){board[2][2] = 1; turn5=9;}
                else if(board[2][2] == 1 && board[1][2] == 1 && board[0][2] == 0){board[0][2] = 1; turn5=3;}
                else if(board[0][2] == 1 && board[2][2] == 1 && board[1][2] == 0){board[1][2] = 1; turn5=6;}

                else if(board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 0){board[0][2] = 1; turn5=3;} // check Win left right
                else if(board[0][2] == 1 && board[0][1] == 1 && board[0][0] == 0){board[0][0] = 1; turn5=1;}
                else if(board[0][0] == 1 && board[0][2] == 1 && board[0][1] == 0){board[0][1] = 1; turn5=2;}
                else if(board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 0){board[1][2] = 1; turn5=6;}
                else if(board[1][2] == 1 && board[1][1] == 1 && board[1][0] == 0){board[1][0] = 1; turn5=4;}
                else if(board[1][0] == 1 && board[1][2] == 1 && board[1][1] == 0){board[1][1] = 1; turn5=5;}
                else if(board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 0){board[2][2] = 1; turn5=9;}
                else if(board[2][2] == 1 && board[2][1] == 1 && board[2][0] == 0){board[2][0] = 1; turn5=7;}
                else if(board[2][0] == 1 && board[2][2] == 1 && board[2][1] == 0){board[2][1] = 1; turn5=8;}

                else if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 0){board[2][2] = 1; turn5=9;} // check Win diagonal
                else if(board[2][2] == 1 && board[1][1] == 1 && board[0][0] == 0){board[0][0] = 1; turn5=1;}
                else if(board[0][0] == 1 && board[2][2] == 1 && board[1][1] == 0){board[1][1] = 1; turn5=5;}
                else if(board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 0){board[0][2] = 1; turn5=3;}
                else if(board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 0){board[2][0] = 1; turn5=7;}
                else if(board[2][0] == 1 && board[0][2] == 1 && board[1][1] == 0){board[1][1] = 1; turn5=5;}
                else

                if(board[0][0] == 2 && board[1][0] == 2 && board[2][0] == 0){board[2][0] = 1; turn5=7;} // check up down
                else if(board[2][0] == 2 && board[1][0] == 2 && board[0][0] == 0){board[0][0] = 1; turn5=1;}
                else if(board[0][0] == 2 && board[2][0] == 2 && board[1][0] == 0){board[1][0] = 1; turn5=4;}
                else if(board[0][1] == 2 && board[1][1] == 2 && board[2][1] == 0){board[2][1] = 1; turn5=8;}
                else if(board[2][1] == 2 && board[1][1] == 2 && board[0][1] == 0){board[0][1] = 1; turn5=2;}
                else if(board[0][1] == 2 && board[2][1] == 2 && board[1][1] == 0){board[1][1] = 1; turn5=5;}
                else if(board[0][2] == 2 && board[1][2] == 2 && board[2][2] == 0){board[2][2] = 1; turn5=9;}
                else if(board[2][2] == 2 && board[1][2] == 2 && board[0][2] == 0){board[0][2] = 1; turn5=3;}
                else if(board[0][2] == 2 && board[2][2] == 2 && board[1][2] == 0){board[1][2] = 1; turn5=6;}

                else if(board[0][0] == 2 && board[0][1] == 2 && board[0][2] == 0){board[0][2] = 1; turn5=3;} // check left right
                else if(board[0][2] == 2 && board[0][1] == 2 && board[0][0] == 0){board[0][0] = 1; turn5=1;}
                else if(board[0][0] == 2 && board[0][2] == 2 && board[0][1] == 0){board[0][1] = 1; turn5=2;}
                else if(board[1][0] == 2 && board[1][1] == 2 && board[1][2] == 0){board[1][2] = 1; turn5=6;}
                else if(board[1][2] == 2 && board[1][1] == 2 && board[1][0] == 0){board[1][0] = 1; turn5=4;}
                else if(board[1][0] == 2 && board[1][2] == 2 && board[1][1] == 0){board[1][1] = 1; turn5=5;}
                else if(board[2][0] == 2 && board[2][1] == 2 && board[2][2] == 0){board[2][2] = 1; turn5=9;}
                else if(board[2][2] == 2 && board[2][1] == 2 && board[2][0] == 0){board[2][0] = 1; turn5=7;}
                else if(board[2][0] == 2 && board[2][2] == 2 && board[2][1] == 0){board[2][1] = 1; turn5=8;}

                else if(board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 0){board[2][2] = 1; turn5=9;} // check diagonal
                else if(board[2][2] == 2 && board[1][1] == 2 && board[0][0] == 0){board[0][0] = 1; turn5=1;}
                else if(board[0][0] == 2 && board[2][2] == 2 && board[1][1] == 0){board[1][1] = 1; turn5=5;}
                else if(board[2][0] == 2 && board[1][1] == 2 && board[0][2] == 0){board[0][2] = 1; turn5=3;}
                else if(board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 0){board[2][0] = 1; turn5=7;}
                else if(board[2][0] == 2 && board[0][2] == 2 && board[1][1] == 0){board[1][1] = 1; turn5=5;}
                else{

                    turn5 = (rand() % 9) + 2;
                    while (turn5==turn2 || turn5==turn3 || turn5==turn4 || turn5==10) //some reason (rand() % 9) + 2 would sometimes pick ten
                    {
                        turn5 = (rand() % 9) + 2;
                    }

                    if(turn5 == 2){board[0][1] = 1;
                    } else if(turn5==3){board[0][2] = 1;
                    } else if(turn5==4){board[1][0] = 1;
                    } else if(turn5==5){board[1][1] = 1;
                    } else if(turn5==6){board[1][2] = 1;
                    } else if(turn5==7){board[2][0] = 1;
                    } else if(turn5==8){board[2][1] = 1;
                    } else if(turn5==9){board[2][2] = 1;
                    }
                }

                checkW(board);
                if (checkW(board) == 1)
                {
                    winCounter++; //if game over, print out the board and where each turn went
                    turn6 = 0; turn7 = 0; turn8 = 0; turn9 = 0;
                    slot6 = 0; slot7 = 0; slot8 = 0; slot9 = 0;

                    cout << "turn one: " << 1 << endl;
                    cout << "turn two: " << turn2 << endl;
                    cout << "turn three: " << turn3 << endl;
                    cout << "turn four: " << turn4 << endl;
                    cout << "turn five: " << turn5 << endl;
                    cout << "turn six: " << turn6 << endl;
                    cout << "turn seven: " << turn7 << endl;
                    cout << "turn eight: " << turn8 << endl;
                    cout << "turn nine: " << turn9 << endl;
                    cout << "rounds lasted: " << 5 << endl << endl;
                    for(int games = 0; games < 1; games++){
                        for(int i = 0; i < 3; i++){
                            for(int j = 0; j < 3; j++){
                                cout << board[i][j] << " " ;
                            }
                            cout << endl;
                        }
                        cout << endl;
                    }
                board[0][1] = 0;
                board[0][2] = 0;
                board[1][0] = 0;
                board[1][1] = 0;
                board[1][2] = 0;
                board[2][0] = 0;
                board[2][1] = 0;
                board[2][2] = 0;
                    break;
                }

                if(board[0][0] == 2 && board[1][0] == 2 && board[2][0] == 0){board[2][0] = 2; turn6=7;} // check Win up down
                else if(board[2][0] == 2 && board[1][0] == 2 && board[0][0] == 0){board[0][0] = 2; turn6=1;}
                else if(board[0][0] == 2 && board[2][0] == 2 && board[1][0] == 0){board[1][0] = 2; turn6=4;}
                else if(board[0][1] == 2 && board[1][1] == 2 && board[2][1] == 0){board[2][1] = 2; turn6=8;}
                else if(board[2][1] == 2 && board[1][1] == 2 && board[0][1] == 0){board[0][1] = 2; turn6=2;}
                else if(board[0][1] == 2 && board[2][1] == 2 && board[1][1] == 0){board[1][1] = 2; turn6=5;}
                else if(board[0][2] == 2 && board[1][2] == 2 && board[2][2] == 0){board[2][2] = 2; turn6=9;}
                else if(board[2][2] == 2 && board[1][2] == 2 && board[0][2] == 0){board[0][2] = 2; turn6=3;}
                else if(board[0][2] == 2 && board[2][2] == 2 && board[1][2] == 0){board[1][2] = 2; turn6=6;}

                else if(board[0][0] == 2 && board[0][1] == 2 && board[0][2] == 0){board[0][2] = 2; turn6=3;} // check Win left right
                else if(board[0][2] == 2 && board[0][1] == 2 && board[0][0] == 0){board[0][0] = 2; turn6=1;}
                else if(board[0][0] == 2 && board[0][2] == 2 && board[0][1] == 0){board[0][1] = 2; turn6=2;}
                else if(board[1][0] == 2 && board[1][1] == 2 && board[1][2] == 0){board[1][2] = 2; turn6=6;}
                else if(board[1][2] == 2 && board[1][1] == 2 && board[1][0] == 0){board[1][0] = 2; turn6=4;}
                else if(board[1][0] == 2 && board[1][2] == 2 && board[1][1] == 0){board[1][1] = 2; turn6=5;}
                else if(board[2][0] == 2 && board[2][1] == 2 && board[2][2] == 0){board[2][2] = 2; turn6=9;}
                else if(board[2][2] == 2 && board[2][1] == 2 && board[2][0] == 0){board[2][0] = 2; turn6=7;}
                else if(board[2][0] == 2 && board[2][2] == 2 && board[2][1] == 0){board[2][1] = 2; turn6=8;}

                else if(board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 0){board[2][2] = 2; turn6=9;} // check Win diagonal
                else if(board[2][2] == 2 && board[1][1] == 2 && board[0][0] == 0){board[0][0] = 2; turn6=1;}
                else if(board[0][0] == 2 && board[2][2] == 2 && board[1][1] == 0){board[1][1] = 2; turn6=5;}
                else if(board[2][0] == 2 && board[1][1] == 2 && board[0][2] == 0){board[0][2] = 2; turn6=3;}
                else if(board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 0){board[2][0] = 2; turn6=7;}
                else if(board[2][0] == 2 && board[0][2] == 2 && board[1][1] == 0){board[1][1] = 2; turn6=5;}
                else

                if(board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 0){board[2][0] = 2; turn6=7;} // check up down
                else if(board[2][0] == 1 && board[1][0] == 1 && board[0][0] == 0){board[0][0] = 2; turn6=1;}
                else if(board[0][0] == 1 && board[2][0] == 1 && board[1][0] == 0){board[1][0] = 2; turn6=4;}
                else if(board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 0){board[2][1] = 2; turn6=8;}
                else if(board[2][1] == 1 && board[1][1] == 1 && board[0][1] == 0){board[0][1] = 2; turn6=2;}
                else if(board[0][1] == 1 && board[2][1] == 1 && board[1][1] == 0){board[1][1] = 2; turn6=5;}
                else if(board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 0){board[2][2] = 2; turn6=9;}
                else if(board[2][2] == 1 && board[1][2] == 1 && board[0][2] == 0){board[0][2] = 2; turn6=3;}
                else if(board[0][2] == 1 && board[2][2] == 1 && board[1][2] == 0){board[1][2] = 2; turn6=6;}

                else if(board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 0){board[0][2] = 2; turn6=3;} // check left right
                else if(board[0][2] == 1 && board[0][1] == 1 && board[0][0] == 0){board[0][0] = 2; turn6=1;}
                else if(board[0][0] == 1 && board[0][2] == 1 && board[0][1] == 0){board[0][1] = 2; turn6=2;}
                else if(board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 0){board[1][2] = 2; turn6=6;}
                else if(board[1][2] == 1 && board[1][1] == 1 && board[1][0] == 0){board[1][0] = 2; turn6=4;}
                else if(board[1][0] == 1 && board[1][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn6=5;}
                else if(board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 0){board[2][2] = 2; turn6=9;}
                else if(board[2][2] == 1 && board[2][1] == 1 && board[2][0] == 0){board[2][0] = 2; turn6=7;}
                else if(board[2][0] == 1 && board[2][2] == 1 && board[2][1] == 0){board[2][1] = 2; turn6=8;}

                else if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 0){board[2][2] = 2; turn6=9;} // check diagonal
                else if(board[2][2] == 1 && board[1][1] == 1 && board[0][0] == 0){board[0][0] = 2; turn6=1;}
                else if(board[0][0] == 1 && board[2][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn6=5;}
                else if(board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 0){board[0][2] = 2; turn6=3;}
                else if(board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 0){board[2][0] = 2; turn6=7;}
                else if(board[2][0] == 1 && board[0][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn6=5;}
                else{

                    turn6 = (rand() % 9) + 2;
                    while (turn6 == turn2 || turn6 == turn3 || turn6 == turn4 || turn6 == turn5 || turn6 == 10)
                    {
                        turn6 = (rand() % 9) + 2;
                    }
                    if(turn6 == 2){board[0][1] = 2;
                    } else if(turn6==3){board[0][2] = 2;
                    } else if(turn6==4){board[1][0] = 2;
                    } else if(turn6==5){board[1][1] = 2;
                    } else if(turn6==6){board[1][2] = 2;
                    } else if(turn6==7){board[2][0] = 2;
                    } else if(turn6==8){board[2][1] = 2;
                    } else if(turn6==9){board[2][2] = 2;
                    }
                }

                checkL(board);
                if (checkL(board) == 1)
                {
                    lossCounter++;
                    turn7 = 0; turn8 = 0; turn9 = 0;
                    slot7 = 0; slot8 = 0; slot9 = 0;
                    cout << "turn one: " << 1 << endl;
                    cout << "turn two: " << turn2 << endl;
                    cout << "turn three: " << turn3 << endl;
                    cout << "turn four: " << turn4 << endl;
                    cout << "turn five: " << turn5 << endl;
                    cout << "turn six: " << turn6 << endl;
                    cout << "turn seven: " << turn7 << endl;
                    cout << "turn eight: " << turn8 << endl;
                    cout << "turn nine: " << turn9 << endl;
                    cout << "rounds lasted: " << 6 << endl << endl;
                    for(int games = 0; games < 1; games++){
                        for(int i = 0; i < 3; i++){
                            for(int j = 0; j < 3; j++){
                                cout << board[i][j] << " " ;
                            }
                            cout << endl;
                        }
                        cout << endl;
                    }
                board[0][1] = 0;
                board[0][2] = 0;
                board[1][0] = 0;
                board[1][1] = 0;
                board[1][2] = 0;
                board[2][0] = 0;
                board[2][1] = 0;
                board[2][2] = 0;
                    break;
                }

                if(board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 0){board[2][0] = 1; turn7=7;} // check Win up down
                else if(board[2][0] == 1 && board[1][0] == 1 && board[0][0] == 0){board[0][0] = 1; turn7=1;}
                else if(board[0][0] == 1 && board[2][0] == 1 && board[1][0] == 0){board[1][0] = 1; turn7=4;}
                else if(board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 0){board[2][1] = 1; turn7=8;}
                else if(board[2][1] == 1 && board[1][1] == 1 && board[0][1] == 0){board[0][1] = 1; turn7=2;}
                else if(board[0][1] == 1 && board[2][1] == 1 && board[1][1] == 0){board[1][1] = 1; turn7=5;}
                else if(board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 0){board[2][2] = 1; turn7=9;}
                else if(board[2][2] == 1 && board[1][2] == 1 && board[0][2] == 0){board[0][2] = 1; turn7=3;}
                else if(board[0][2] == 1 && board[2][2] == 1 && board[1][2] == 0){board[1][2] = 1; turn7=6;}

                else if(board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 0){board[0][2] = 1; turn7=3;} // check Win left right
                else if(board[0][2] == 1 && board[0][1] == 1 && board[0][0] == 0){board[0][0] = 1; turn7=1;}
                else if(board[0][0] == 1 && board[0][2] == 1 && board[0][1] == 0){board[0][1] = 1; turn7=2;}
                else if(board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 0){board[1][2] = 1; turn7=6;}
                else if(board[1][2] == 1 && board[1][1] == 1 && board[1][0] == 0){board[1][0] = 1; turn7=4;}
                else if(board[1][0] == 1 && board[1][2] == 1 && board[1][1] == 0){board[1][1] = 1; turn7=5;}
                else if(board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 0){board[2][2] = 1; turn7=9;}
                else if(board[2][2] == 1 && board[2][1] == 1 && board[2][0] == 0){board[2][0] = 1; turn7=7;}
                else if(board[2][0] == 1 && board[2][2] == 1 && board[2][1] == 0){board[2][1] = 1; turn7=8;}

                else if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 0){board[2][2] = 1; turn7=9;} // check Win diagonal
                else if(board[2][2] == 1 && board[1][1] == 1 && board[0][0] == 0){board[0][0] = 1; turn7=1;}
                else if(board[0][0] == 1 && board[2][2] == 1 && board[1][1] == 0){board[1][1] = 1; turn7=5;}
                else if(board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 0){board[0][2] = 1; turn7=3;}
                else if(board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 0){board[2][0] = 1; turn7=7;}
                else if(board[2][0] == 1 && board[0][2] == 1 && board[1][1] == 0){board[1][1] = 1; turn7=5;}
                else

                if(board[0][0] == 2 && board[1][0] == 2 && board[2][0] == 0){board[2][0] = 1; turn7=7;} // check up down
                else if(board[2][0] == 2 && board[1][0] == 2 && board[0][0] == 0){board[0][0] = 1; turn7=1;}
                else if(board[0][0] == 2 && board[2][0] == 2 && board[1][0] == 0){board[1][0] = 1; turn7=4;}
                else if(board[0][1] == 2 && board[1][1] == 2 && board[2][1] == 0){board[2][1] = 1; turn7=8;}
                else if(board[2][1] == 2 && board[1][1] == 2 && board[0][1] == 0){board[0][1] = 1; turn7=2;}
                else if(board[0][1] == 2 && board[2][1] == 2 && board[1][1] == 0){board[1][1] = 1; turn7=5;}
                else if(board[0][2] == 2 && board[1][2] == 2 && board[2][2] == 0){board[2][2] = 1; turn7=9;}
                else if(board[2][2] == 2 && board[1][2] == 2 && board[0][2] == 0){board[0][2] = 1; turn7=3;}
                else if(board[0][2] == 2 && board[2][2] == 2 && board[1][2] == 0){board[1][2] = 1; turn7=6;}

                else if(board[0][0] == 2 && board[0][1] == 2 && board[0][2] == 0){board[0][2] = 1; turn7=3;} // check left right
                else if(board[0][2] == 2 && board[0][1] == 2 && board[0][0] == 0){board[0][0] = 1; turn7=1;}
                else if(board[0][0] == 2 && board[0][2] == 2 && board[0][1] == 0){board[0][1] = 1; turn7=2;}
                else if(board[1][0] == 2 && board[1][1] == 2 && board[1][2] == 0){board[1][2] = 1; turn7=6;}
                else if(board[1][2] == 2 && board[1][1] == 2 && board[1][0] == 0){board[1][0] = 1; turn7=4;}
                else if(board[1][0] == 2 && board[1][2] == 2 && board[1][1] == 0){board[1][1] = 1; turn7=5;}
                else if(board[2][0] == 2 && board[2][1] == 2 && board[2][2] == 0){board[2][2] = 1; turn7=9;}
                else if(board[2][2] == 2 && board[2][1] == 2 && board[2][0] == 0){board[2][0] = 1; turn7=7;}
                else if(board[2][0] == 2 && board[2][2] == 2 && board[2][1] == 0){board[2][1] = 1; turn7=8;}

                else if(board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 0){board[2][2] = 1; turn7=9;} // check diagonal
                else if(board[2][2] == 2 && board[1][1] == 2 && board[0][0] == 0){board[0][0] = 1; turn7=1;}
                else if(board[0][0] == 2 && board[2][2] == 2 && board[1][1] == 0){board[1][1] = 1; turn7=5;}
                else if(board[2][0] == 2 && board[1][1] == 2 && board[0][2] == 0){board[0][2] = 1; turn7=3;}
                else if(board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 0){board[2][0] = 1; turn7=7;}
                else if(board[2][0] == 2 && board[0][2] == 2 && board[1][1] == 0){board[1][1] = 1; turn7=5;}
                else{

                    turn7 = (rand() % 9) + 2;
                    while (turn7==turn2 || turn7==turn3 || turn7==turn4 || turn7==turn5 || turn7==turn6 || turn7 == 10)
                    {
                        turn7 = (rand() % 9) + 2;
                    }
                    if(turn7 == 2){board[0][1] = 1;
                    } else if(turn7==3){board[0][2] = 1;
                    } else if(turn7==4){board[1][0] = 1;
                    } else if(turn7==5){board[1][1] = 1;
                    } else if(turn7==6){board[1][2] = 1;
                    } else if(turn7==7){board[2][0] = 1;
                    } else if(turn7==8){board[2][1] = 1;
                    } else if(turn7==9){board[2][2] = 1;
                    }
                }

                checkW(board);
                if (checkW(board) == 1)
                {
                    winCounter++;
                    turn8 = 0; turn9 = 0;
                    slot8 = 0; slot9 = 0;
                    cout << "turn one: " << 1 << endl;
                    cout << "turn two: " << turn2 << endl;
                    cout << "turn three: " << turn3 << endl;
                    cout << "turn four: " << turn4 << endl;
                    cout << "turn five: " << turn5 << endl;
                    cout << "turn six: " << turn6 << endl;
                    cout << "turn seven: " << turn7 << endl;
                    cout << "turn eight: " << turn8 << endl;
                    cout << "turn nine: " << turn9 << endl;
                    cout << "rounds lasted: " << 7 << endl << endl;
                    for(int games = 0; games < 1; games++){
                        for(int i = 0; i < 3; i++){
                            for(int j = 0; j < 3; j++){
                                cout << board[i][j] << " " ;
                            }
                            cout << endl;
                        }
                        cout << endl;
                    }
                board[0][1] = 0;
                board[0][2] = 0;
                board[1][0] = 0;
                board[1][1] = 0;
                board[1][2] = 0;
                board[2][0] = 0;
                board[2][1] = 0;
                board[2][2] = 0;
                    break;
                }

                if(board[0][0] == 2 && board[1][0] == 2 && board[2][0] == 0){board[2][0] = 2; turn8=7;} // check Win up down
                else if(board[2][0] == 2 && board[1][0] == 2 && board[0][0] == 0){board[0][0] = 2; turn8=1;}
                else if(board[0][0] == 2 && board[2][0] == 2 && board[1][0] == 0){board[1][0] = 2; turn8=4;}
                else if(board[0][1] == 2 && board[1][1] == 2 && board[2][1] == 0){board[2][1] = 2; turn8=8;}
                else if(board[2][1] == 2 && board[1][1] == 2 && board[0][1] == 0){board[0][1] = 2; turn8=2;}
                else if(board[0][1] == 2 && board[2][1] == 2 && board[1][1] == 0){board[1][1] = 2; turn8=5;}
                else if(board[0][2] == 2 && board[1][2] == 2 && board[2][2] == 0){board[2][2] = 2; turn8=9;}
                else if(board[2][2] == 2 && board[1][2] == 2 && board[0][2] == 0){board[0][2] = 2; turn8=3;}
                else if(board[0][2] == 2 && board[2][2] == 2 && board[1][2] == 0){board[1][2] = 2; turn8=6;}

                else if(board[0][0] == 2 && board[0][1] == 2 && board[0][2] == 0){board[0][2] = 2; turn8=3;} // check Win left right
                else if(board[0][2] == 2 && board[0][1] == 2 && board[0][0] == 0){board[0][0] = 2; turn8=1;}
                else if(board[0][0] == 2 && board[0][2] == 2 && board[0][1] == 0){board[0][1] = 2; turn8=2;}
                else if(board[1][0] == 2 && board[1][1] == 2 && board[1][2] == 0){board[1][2] = 2; turn8=6;}
                else if(board[1][2] == 2 && board[1][1] == 2 && board[1][0] == 0){board[1][0] = 2; turn8=4;}
                else if(board[1][0] == 2 && board[1][2] == 2 && board[1][1] == 0){board[1][1] = 2; turn8=5;}
                else if(board[2][0] == 2 && board[2][1] == 2 && board[2][2] == 0){board[2][2] = 2; turn8=9;}
                else if(board[2][2] == 2 && board[2][1] == 2 && board[2][0] == 0){board[2][0] = 2; turn8=7;}
                else if(board[2][0] == 2 && board[2][2] == 2 && board[2][1] == 0){board[2][1] = 2; turn8=8;}

                else if(board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 0){board[2][2] = 2; turn8=9;} // check Win diagonal
                else if(board[2][2] == 2 && board[1][1] == 2 && board[0][0] == 0){board[0][0] = 2; turn8=1;}
                else if(board[0][0] == 2 && board[2][2] == 2 && board[1][1] == 0){board[1][1] = 2; turn8=5;}
                else if(board[2][0] == 2 && board[1][1] == 2 && board[0][2] == 0){board[0][2] = 2; turn8=3;}
                else if(board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 0){board[2][0] = 2; turn8=7;}
                else if(board[2][0] == 2 && board[0][2] == 2 && board[1][1] == 0){board[1][1] = 2; turn8=5;}
                else

                if(board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 0){board[2][0] = 2; turn8=7;} // check up down
                else if(board[2][0] == 1 && board[1][0] == 1 && board[0][0] == 0){board[0][0] = 2; turn8=1;}
                else if(board[0][0] == 1 && board[2][0] == 1 && board[1][0] == 0){board[1][0] = 2; turn8=4;}
                else if(board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 0){board[2][1] = 2; turn8=8;}
                else if(board[2][1] == 1 && board[1][1] == 1 && board[0][1] == 0){board[0][1] = 2; turn8=2;}
                else if(board[0][1] == 1 && board[2][1] == 1 && board[1][1] == 0){board[1][1] = 2; turn8=5;}
                else if(board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 0){board[2][2] = 2; turn8=9;}
                else if(board[2][2] == 1 && board[1][2] == 1 && board[0][2] == 0){board[0][2] = 2; turn8=3;}
                else if(board[0][2] == 1 && board[2][2] == 1 && board[1][2] == 0){board[1][2] = 2; turn8=6;}

                else if(board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 0){board[0][2] = 2; turn8=3;} // check left right
                else if(board[0][2] == 1 && board[0][1] == 1 && board[0][0] == 0){board[0][0] = 2; turn8=1;}
                else if(board[0][0] == 1 && board[0][2] == 1 && board[0][1] == 0){board[0][1] = 2; turn8=2;}
                else if(board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 0){board[1][2] = 2; turn8=6;}
                else if(board[1][2] == 1 && board[1][1] == 1 && board[1][0] == 0){board[1][0] = 2; turn8=4;}
                else if(board[1][0] == 1 && board[1][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn8=5;}
                else if(board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 0){board[2][2] = 2; turn8=9;}
                else if(board[2][2] == 1 && board[2][1] == 1 && board[2][0] == 0){board[2][0] = 2; turn8=7;}
                else if(board[2][0] == 1 && board[2][2] == 1 && board[2][1] == 0){board[2][1] = 2; turn8=8;}

                else if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 0){board[2][2] = 2; turn8=9;} // check diagonal
                else if(board[2][2] == 1 && board[1][1] == 1 && board[0][0] == 0){board[0][0] = 2; turn8=1;}
                else if(board[0][0] == 1 && board[2][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn8=5;}
                else if(board[2][0] == 1 && board[1][1] == 1 && board[0][2] == 0){board[0][2] = 2; turn8=3;}
                else if(board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 0){board[2][0] = 2; turn8=7;}
                else if(board[2][0] == 1 && board[0][2] == 1 && board[1][1] == 0){board[1][1] = 2; turn8=5;}
                else{

                    turn8 = (rand() % 9) + 2;
                    while (turn8==turn2 || turn8==turn3 || turn8==turn4 || turn8==turn5 || turn8==turn6 || turn8==turn7 || turn8 == 10)
                    {
                        turn8 = (rand() % 9) + 2;
                    }

                    if(turn8 == 2){board[0][1] = 2;
                    } else if(turn8==3){board[0][2] = 2;
                    } else if(turn8==4){board[1][0] = 2;
                    } else if(turn8==5){board[1][1] = 2;
                    } else if(turn8==6){board[1][2] = 2;
                    } else if(turn8==7){board[2][0] = 2;
                    } else if(turn8==8){board[2][1] = 2;
                    } else if(turn8==9){board[2][2] = 2;
                    }
                }

                checkL(board);
                if (checkL(board) == 1)
                {
                    lossCounter++;
                    turn9 = 0;
                    cout << "turn one: " << 1 << endl;
                    cout << "turn two: " << turn2 << endl;
                    cout << "turn three: " << turn3 << endl;
                    cout << "turn four: " << turn4 << endl;
                    cout << "turn five: " << turn5 << endl;
                    cout << "turn six: " << turn6 << endl;
                    cout << "turn seven: " << turn7 << endl;
                    cout << "turn eight: " << turn8 << endl;
                    cout << "turn nine: " << turn9 << endl;
                    cout << "rounds lasted: " << 8 << endl << endl;
                    for(int games = 0; games < 1; games++){
                        for(int i = 0; i < 3; i++){
                            for(int j = 0; j < 3; j++){
                                cout << board[i][j] << " " ;
                            }
                            cout << endl;
                        }
                        cout << endl;
                    }
                board[0][1] = 0;
                board[0][2] = 0;
                board[1][0] = 0;
                board[1][1] = 0;
                board[1][2] = 0;
                board[2][0] = 0;
                board[2][1] = 0;
                board[2][2] = 0;
                    break;
                }

                turn9 = (rand() % 9) + 2;
                while (turn9==turn2 || turn9==turn3 || turn9==turn4 || turn9==turn5 || turn9==turn6 || turn9==turn7 || turn9==turn8 || turn9 == 10)
                {
                turn9 = (rand() % 9) + 2;
                }

                if(turn9 == 2){board[0][1] = 1;
                } else if(turn9==3){board[0][2] = 1;
                } else if(turn9==4){board[1][0] = 1;
                } else if(turn9==5){board[1][1] = 1;
                } else if(turn9==6){board[1][2] = 1;
                } else if(turn9==7){board[2][0] = 1;
                } else if(turn9==8){board[2][1] = 1;
                } else if(turn9==9){board[2][2] = 1;
                }

                cout << "turn one: " << 1 << endl;
                cout << "turn two: " << turn2 << endl;
                cout << "turn three: " << turn3 << endl;
                cout << "turn four: " << turn4 << endl;
                cout << "turn five: " << turn5 << endl;
                cout << "turn six: " << turn6 << endl;
                cout << "turn seven: " << turn7 << endl;
                cout << "turn eight: " << turn8 << endl;
                cout << "turn nine: " << turn9 << endl;
                cout << "rounds lasted: " << 9 << endl << endl;
                for(int games = 0; games < 1; games++){
                    for(int i = 0; i < 3; i++){
                        for(int j = 0; j < 3; j++){
                            cout << board[i][j] << " " ;
                        }
                        cout << endl;
                    }
                    cout << endl;
                }

                checkW(board);
                if (checkW(board) == 1)
                {
                    winCounter++;
                }
                board[0][1] = 0;
                board[0][2] = 0;
                board[1][0] = 0;
                board[1][1] = 0;
                board[1][2] = 0;
                board[2][0] = 0;
                board[2][1] = 0;
                board[2][2] = 0;
                break;
            }

    }

         cout << "Wins: " << winCounter << endl;
         cout << "Defeats: " << lossCounter << endl;
         return 0;

}
