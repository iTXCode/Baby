#define _CRT_SECURE_NO_WARNINGS 1



#include"grade.h"

void InitGrade(Grade* gra)
{
	assert(gra);
	gra->sz = 0;
	memset(gra->data,0,sizeof(gra->data));
}

void AddInfo(Grade *gra)
{
	assert(gra);
	if(gra->sz == STUNUM_MAX)
	{
		printf("人数已满,不能继续录入!\n");
	}
	else
	{
		printf("请输入要添加的学生姓名:");
	    scanf("%s",gra->data[gra->sz].name);
	    printf("请输入要添加的学生年龄:");
	    scanf("%s",&(gra->data[gra->sz].age));
        printf("请输入要添加的学生学号:");
	    scanf("%s",gra->data[gra->sz].number);
	    printf("请输入要添加学生的语文成绩:");
		scanf("%s",&(gra->data[gra->sz].Chinese));
		printf("请输入要添加学生的数学成绩:");
	    scanf("%s",&(gra->data[gra->sz].Math));
		printf("请输入要添加学生的英语成绩:");
		scanf("%s",&(gra->data[gra->sz].English));
	    printf("请输入要添加的学生班级:");
	    scanf("%s",gra->data [gra->sz].stucla);
	    printf("请输入要添加的学生住址:");
	    scanf("%s",gra->data[gra->sz].addr);
		gra->sz++;
	}
}
void ShowInfo(const Grade* gra)
{   //学生信息：姓名、年龄、学号、成绩、班级、地址
	int i=0;
	assert(gra);
	printf("%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\n",
			"姓名","年龄","学号","语文","数学","英语","班级","住址");
	for(i=0;i<gra->sz;i++)
	{
		printf("%5s\t%5c\t%5s\t%5c\t%5c\t%5c\t%5s\t%5s\n",
			gra->data[i].name,
		    gra->data[i].age,
		    gra->data[i].number,
			gra->data[i].Chinese,
			gra->data[i].Math,
			gra->data[i].English,
            //gra->data[i].Average,
			gra->data[i].stucla,
			gra->data[i].addr);
	}
}

int FinGrade(Grade* gra,char name[])
{
	int i=0;
	for(i=0;i<gra->sz;i++)
	{
		if(strcmp(gra->data[i].name,name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelInfo(Grade* gra)
{
	int j;
	int tmp;
	char name[NAME_MAX]={0};
    assert(gra);
	if(gra->sz==0)
	{
		printf("通讯录已空!\n");
	}
	printf("请输入要删除学生的信息:");
	scanf("%s",name);
	tmp=FinGrade(gra,name);
	if(tmp==-1)
	{
		printf("你查找的对象不存在!\n");
	}
	else
	{
		for(j=tmp; j<gra->sz-1;j++)
	       { 
			   gra->data[j]=gra->data[j+1];
	       } 
	 gra->sz--;	
	 printf("删除成功!\n");
	}	
}
void SeaInfo(Grade* gra)
{
	int tmp=0;
	char name[NAME_MAX]={0};
	assert(gra);
	printf("请输入要查找对象的姓名:");
	scanf("%s",name);
	tmp=FinGrade(gra,name);
	if(tmp==-1)
	{
		printf("要查找的对象不存在!\n");
	}
	else
	{
		printf("%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\n",
			"姓名","年龄","学号","语文","数学","英语","班级","住址");
		printf("%5s\t%5c\t%5s\t%5c\t%5c\t%5c\t%5s\t%5s\n",
			gra->data[tmp].name,
		    gra->data[tmp].age,
		    gra->data[tmp].number,
			gra->data[tmp].Chinese,
			gra->data[tmp].Math,
			gra->data[tmp].English,
            //gra->data[i].Average,
			gra->data[tmp].stucla,
			gra->data[tmp].addr);
	}	
}

void ModInfo(Grade* gra)
{
	int ret=0;
	char name[NAME_MAX ]={0};
	assert(gra);
	printf("请输入要修改的学生姓名:");
	scanf("%s",name);
	ret=FinGrade(gra,name);
	if(ret == -1)
	{
		printf("你要修改的对象不存在!\n");
	}
	else
	{
		printf("请输入要修改后的学生姓名:");
	    scanf("%s",gra->data[ret].name);
	    printf("请输入要修改后的学生年龄:");
	    scanf("%s",&(gra->data[ret].age));
        printf("请输入要修改后的学生学号:");
	    scanf("%s",gra->data[ret].number);
	    printf("请输入要修改后学生的语文成绩:");
		scanf("%s",&(gra->data[ret].Chinese));
		printf("请输入要修改后学生的数学成绩:");
	    scanf("%s",&(gra->data[ret].Math));
		printf("请输入要修改后学生的英语成绩:");
		scanf("%s",&(gra->data[ret].English));
	    printf("请输入要修改后的学生班级:");
	    scanf("%s",gra->data [ret].stucla);
	    printf("请输入要修改后的学生住址:");
	    scanf("%s",gra->data[ret].addr);
	}
}

void SorInfo(Grade* gra)
{
	int i=0;
	int j=0;
	assert(gra);
	for(i=0;i<gra->sz-1;i++)
	{
		int flag = 1;
		for(j=0;j<gra->sz-1-i;j++)
		{
			if(strcmp(gra->data[j].name,gra->data[j+1].name)>0)
			{
				StuInfo tmp=gra->data[j];
				gra->data[j]=gra->data[j+1];
				gra->data[j+1]=tmp;
				flag = 0;
			}
		}
		if(flag ==1)
		break;
	}
	printf("排序成功!\n");
}
