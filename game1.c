#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdio.h>
void IninBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j]=' ';
		}
	}

}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印一行的数据
		printf(" %c | %c | %c \n");
		//打印分割行
		printf("---|---|---\n");
			
	}


}
