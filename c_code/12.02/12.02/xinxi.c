#define _CRT_SECURE_NO_WARNINGS 1

#include "xinxi.h"

void Addmessage(struct student stu[])
{
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%s%s%d%d%s",&stu[i].name,
		&stu[i].sex,&stu[i].age,&stu[i].num,&stu[i].addr);
	}
	
}