#pragma once
//库函数头文件
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//
#define ROW 3//行
#define COL 3//列

//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Player(char board[ROW][COL], int row, int col);
void Computer(char board[ROW][COL], int row, int col);

//告诉我们四种游戏状态
//玩家赢  *
//电脑赢  #
//平局    Q
//继续    C
char Iswin(char board[ROW][COL], int row, int col);
