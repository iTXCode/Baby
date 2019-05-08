#define _CRT_SECURE_NO_WARNINGS 1



#include  "grade.h"

void menu( )
{
	printf("***********************************\n");
	printf("****1.add             2.delect ****\n");
	printf("****3.search          4.modify ****\n");
	printf("****5.sort            6.show   ****\n");
	printf("*********     0.exit     **********\n");
	printf("***********************************\n");
}

void test( )
{
	int input;
	Grade gra;
	InitGrade(&gra);
	do
	{
		menu( );
		printf("please enter your choose:");
		scanf("%d",&input);
			switch(input)
		{
			case ADD:
				AddInfo(&gra);
				break;
			case DELECT:
				DelInfo(&gra);
				break;
			case SEARCH:
				SeaInfo(&gra);
				break;
			case MODIFY:
				ModInfo(&gra);
				break;
			case SORT:
				SorInfo(&gra);
				break;
			case SHOW:
				ShowInfo(&gra);
				break;
			case EXIT:
				break;
			default:
				printf("输入错误，请重新输入!\n");
				break;
		}
	}while(input);
}


int main()
{
	test();
	return 0;
}
