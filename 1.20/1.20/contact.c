#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"

void InitContact(Contact* con)
{
	assert(con);
	con->sz = 0;
	memset(con->data,0,sizeof(con->data));
}
void AddInformation(Contact *con)
{
	assert(con);
	if(con->sz == people_max)
	{
		printf("通讯录已满，无法继续添加!\n");
	}
	else
	{
		printf("请输入要添加联系人的姓名:");
	    scanf("%s",con->data[con->sz].name);
	    printf("请输入要添加联系人的年龄:");
	    scanf("%d",&(con->data [con->sz].age));
		printf("请输入要添加联系人的性别:");
		scanf("%s",con->data[con->sz].sex);
		printf("请输入要添加联系人的电话:");
		scanf("%s",con->data[con->sz].tele);
		printf("请输入要添加联系人的住址:");
		scanf("%s",con->data[con->sz].addr);
		printf("请输入要添加对象的邮编:");
		scanf("%s",con->data[con->sz].EIP);
		con->sz++;
	}
	
}

void ShowContact(const Contact *con)
{
	int i=0;
	assert(con);
printf("-----------------------------------------------------------------------\n");
	printf("%10s\t%5s\t%5s\t%10s\t%10s\t%5s\n",
			"姓名","年龄","性别","电话","住址","邮编");
		printf("-----------------------------------------------------------------------\n");
	for(i=0;i<con->sz;i++)
	{
		printf("%10s\t%5d\t%5s\t%10s\t%10s\t%5s\n",
		con->data[i].name,
		con->data[i].age,
		con->data[i].sex,
		con->data[i].tele,
		con->data[i].addr,
		con->data[i].EIP);
	printf("-----------------------------------------------------------------------\n");
	}
}
int FindInfo(const Contact *con,char* name)
{
	int i=0;
	for(i=0;i<con->sz;i++)
	{
	     if(strcmp(con->data[i].name,name) == 0)
		  {
				return i;
		  }
	}
	return -1;

}

void Delcontact(Contact *con)
{
	int j=0;
	int tmp;
	int num=0;
	char name[name_max]={0};
	assert(con);
	if(con->sz==0)
	{
		printf("通讯录已空，无法继续删除！\n");
		return;
	}
	printf("请输入要删除联系人的姓名:");
	scanf("%s",name);
	tmp=FindInfo(con,name);
	if(tmp==-1)
	{
		 printf("要删除的用户不存在，请重新输入!\n");
		 return ;
	}
	else
	{
		for(j=tmp; j<con->sz-1;j++)
	       { 
			   con->data[j]=con->data[j+1];
	       } 
		num=tmp;
	 con->sz--;	
	 printf("删除成功!\n");
	}		   
}


void SearchContact(const Contact *con)
{
	char name[name_max]={0};
	int tem=0;
	printf("请输入你要查找人的姓名:");
	scanf("%s",name);
	tem=FindInfo(con,name);
	if(tem == -1)
	{
		printf("你要查找的人不存在!\n");
	}
	else
	{
		printf("%10s\t%5s\t%5s\t%10s\t%10s\t%5s\n",
			"姓名","年龄","性别","电话","住址","邮编");
		printf("%10s\t%5d\t%5s\t%10s\t%10s\t%5s\n",
		con->data[tem].name,
		con->data[tem].age,
		con->data[tem].sex,
		con->data[tem].tele,
		con->data[tem].addr,
		con->data[tem].EIP);
	}
}
void ModefyContact( Contact *con)
{
	char name[name_max]={0};
	int tem=0;
	assert(con);
	printf("请输入你要修改人的姓名:");
	scanf("%s",name);
	tem=FindInfo(con,name);
	if(tem == -1)
	{
		printf("你要修改的人不存在!\n");
	}
	else
	{
		printf("请输入要添加联系人的姓名:");
	    scanf("%s",con->data[tem].name);
	    printf("请输入要添加联系人的年龄:");
	    scanf("%d",&(con->data [tem].age));
		printf("请输入要添加联系人的性别:");
		scanf("%s",con->data[tem].sex);
		printf("请输入要添加联系人的电话:");
		scanf("%s",con->data[tem].tele);
		printf("请输入要添加联系人的住址:");
		scanf("%s",con->data[tem].addr);
		printf("请输入要添加对象的邮编:");
		scanf("%s",con->data[tem].EIP);
	}
}

void SortContact(Contact *con)
{
	int i=0;
	int j=0;
	assert(con);
	for(i=0;i<con->sz-1;i++)
	{
		int flag = 1;
		for(j=0;j<con->sz-1-i;j++)
		{
			if(strcmp(con->data[j].name,con->data[j+1].name)>0)
			{
				PeoInfo tmp=con->data[j];
				con->data[j]=con->data[j+1];
				con->data[j+1]=tmp;
				flag = 0;
			}
		}
		if(flag ==1)
		break;
	}

}
