#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//三子棋的过程
	char board[ROW][COL] = { 0 };//棋盘数组
	//初始化棋盘 - board的元素都给成空格
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	//下棋
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你， 你赢了！\n");
	}
	else if (ret == '#')
	{
		printf("很遗憾，电脑赢了！\n");
	}
	else
	{
		printf("恭喜你，你和电脑打成平手！\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数的生成起点，注意不要频繁使用

	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);

	return 0;
}


