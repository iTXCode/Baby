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
		printf("��������,���ܼ���¼��!\n");
	}
	else
	{
		printf("������Ҫ��ӵ�ѧ������:");
	    scanf("%s",gra->data[gra->sz].name);
	    printf("������Ҫ��ӵ�ѧ������:");
	    scanf("%s",&(gra->data[gra->sz].age));
        printf("������Ҫ��ӵ�ѧ��ѧ��:");
	    scanf("%s",gra->data[gra->sz].number);
	    printf("������Ҫ���ѧ�������ĳɼ�:");
		scanf("%s",&(gra->data[gra->sz].Chinese));
		printf("������Ҫ���ѧ������ѧ�ɼ�:");
	    scanf("%s",&(gra->data[gra->sz].Math));
		printf("������Ҫ���ѧ����Ӣ��ɼ�:");
		scanf("%s",&(gra->data[gra->sz].English));
	    printf("������Ҫ��ӵ�ѧ���༶:");
	    scanf("%s",gra->data [gra->sz].stucla);
	    printf("������Ҫ��ӵ�ѧ��סַ:");
	    scanf("%s",gra->data[gra->sz].addr);
		gra->sz++;
	}
}
void ShowInfo(const Grade* gra)
{   //ѧ����Ϣ�����������䡢ѧ�š��ɼ����༶����ַ
	int i=0;
	assert(gra);
	printf("%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\n",
			"����","����","ѧ��","����","��ѧ","Ӣ��","�༶","סַ");
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
		printf("ͨѶ¼�ѿ�!\n");
	}
	printf("������Ҫɾ��ѧ������Ϣ:");
	scanf("%s",name);
	tmp=FinGrade(gra,name);
	if(tmp==-1)
	{
		printf("����ҵĶ��󲻴���!\n");
	}
	else
	{
		for(j=tmp; j<gra->sz-1;j++)
	       { 
			   gra->data[j]=gra->data[j+1];
	       } 
	 gra->sz--;	
	 printf("ɾ���ɹ�!\n");
	}	
}
void SeaInfo(Grade* gra)
{
	int tmp=0;
	char name[NAME_MAX]={0};
	assert(gra);
	printf("������Ҫ���Ҷ��������:");
	scanf("%s",name);
	tmp=FinGrade(gra,name);
	if(tmp==-1)
	{
		printf("Ҫ���ҵĶ��󲻴���!\n");
	}
	else
	{
		printf("%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\n",
			"����","����","ѧ��","����","��ѧ","Ӣ��","�༶","סַ");
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
	printf("������Ҫ�޸ĵ�ѧ������:");
	scanf("%s",name);
	ret=FinGrade(gra,name);
	if(ret == -1)
	{
		printf("��Ҫ�޸ĵĶ��󲻴���!\n");
	}
	else
	{
		printf("������Ҫ�޸ĺ��ѧ������:");
	    scanf("%s",gra->data[ret].name);
	    printf("������Ҫ�޸ĺ��ѧ������:");
	    scanf("%s",&(gra->data[ret].age));
        printf("������Ҫ�޸ĺ��ѧ��ѧ��:");
	    scanf("%s",gra->data[ret].number);
	    printf("������Ҫ�޸ĺ�ѧ�������ĳɼ�:");
		scanf("%s",&(gra->data[ret].Chinese));
		printf("������Ҫ�޸ĺ�ѧ������ѧ�ɼ�:");
	    scanf("%s",&(gra->data[ret].Math));
		printf("������Ҫ�޸ĺ�ѧ����Ӣ��ɼ�:");
		scanf("%s",&(gra->data[ret].English));
	    printf("������Ҫ�޸ĺ��ѧ���༶:");
	    scanf("%s",gra->data [ret].stucla);
	    printf("������Ҫ�޸ĺ��ѧ��סַ:");
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
	printf("����ɹ�!\n");
}
