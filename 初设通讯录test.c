#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "contact.h"
void menu()
{
	printf("************************************\n");
	printf("****     1.add     2.del      *********\n");
	printf("****    3.serch  4.modify   *********\n");
	printf("****    5.show   6.sort       *********\n");
	printf("****   0.exit                   **********\n");
	printf("************************************\n");
}
int main()
{
	int input = 0;//创建通讯录
	int size = 0;
	struct PeoInfo con;//存放1000人信息
	InitContact(&con);//初始化通讯录

	do
	{
	
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("error，please input(0-6)\n");
			break;
		
		}
	}while(input);
	return 0;
}
