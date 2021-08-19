#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 
#include <stdio.h>
#include <string.h>


struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//通讯录类型
struct Contact
{
	
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已有元素
};
void  IninContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(struct Contact* ps);
