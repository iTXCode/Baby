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
		printf("ͨѶ¼�������޷��������!\n");
	}
	else
	{
		printf("������Ҫ�����ϵ�˵�����:");
	    scanf("%s",con->data[con->sz].name);
	    printf("������Ҫ�����ϵ�˵�����:");
	    scanf("%d",&(con->data [con->sz].age));
		printf("������Ҫ�����ϵ�˵��Ա�:");
		scanf("%s",con->data[con->sz].sex);
		printf("������Ҫ�����ϵ�˵ĵ绰:");
		scanf("%s",con->data[con->sz].tele);
		printf("������Ҫ�����ϵ�˵�סַ:");
		scanf("%s",con->data[con->sz].addr);
		printf("������Ҫ��Ӷ�����ʱ�:");
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
			"����","����","�Ա�","�绰","סַ","�ʱ�");
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
		printf("ͨѶ¼�ѿգ��޷�����ɾ����\n");
		return;
	}
	printf("������Ҫɾ����ϵ�˵�����:");
	scanf("%s",name);
	tmp=FindInfo(con,name);
	if(tmp==-1)
	{
		 printf("Ҫɾ�����û������ڣ�����������!\n");
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
	 printf("ɾ���ɹ�!\n");
	}		   
}


void SearchContact(const Contact *con)
{
	char name[name_max]={0};
	int tem=0;
	printf("��������Ҫ�����˵�����:");
	scanf("%s",name);
	tem=FindInfo(con,name);
	if(tem == -1)
	{
		printf("��Ҫ���ҵ��˲�����!\n");
	}
	else
	{
		printf("%10s\t%5s\t%5s\t%10s\t%10s\t%5s\n",
			"����","����","�Ա�","�绰","סַ","�ʱ�");
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
	printf("��������Ҫ�޸��˵�����:");
	scanf("%s",name);
	tem=FindInfo(con,name);
	if(tem == -1)
	{
		printf("��Ҫ�޸ĵ��˲�����!\n");
	}
	else
	{
		printf("������Ҫ�����ϵ�˵�����:");
	    scanf("%s",con->data[tem].name);
	    printf("������Ҫ�����ϵ�˵�����:");
	    scanf("%d",&(con->data [tem].age));
		printf("������Ҫ�����ϵ�˵��Ա�:");
		scanf("%s",con->data[tem].sex);
		printf("������Ҫ�����ϵ�˵ĵ绰:");
		scanf("%s",con->data[tem].tele);
		printf("������Ҫ�����ϵ�˵�סַ:");
		scanf("%s",con->data[tem].addr);
		printf("������Ҫ��Ӷ�����ʱ�:");
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
