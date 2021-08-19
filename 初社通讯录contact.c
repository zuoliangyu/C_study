#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void  IninContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//最初0个元素
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("full\n");
	}
	else
	{
		printf("please input name:>");
		scanf("%s", ps->data[ps->size].name);
		printf("please input age:>");
		scanf("%d", &ps->data[ps->size].age);
		printf("please input sex:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("please input tele:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("please input addr:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;//
		printf("add  successfully\n");
	}

}
void ShowContact(struct Contact* ps)
{

	if (ps->size == 0)
		printf("no word\n");
}

