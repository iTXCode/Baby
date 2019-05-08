

#ifndef _GRADE_H
#define _GRADE_H_

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define  NAME_MAX 15
#define  NUM_MAX 20
#define  CLASS_MAX 2
#define  ADDR_MAX  20
#define  STUNUM_MAX 60
#define  GRA_MAX  3

enum Choose
{
	EXIT,
	ADD,
	DELECT,
	SEARCH,
	MODIFY,
	SORT,
	SHOW,

};

typedef struct StuInfo
{
	char name[NAME_MAX];
	char age;
	char number[NUM_MAX];
	char Chinese;//语文
	char Math;  //数学
	char English;//英语
    float Average;  //平均值
	char stucla[CLASS_MAX];
	char addr[ADDR_MAX];
}StuInfo;


typedef struct StuGrade 
{
    struct StuInfo data[STUNUM_MAX];
	int sz;
}Grade;


void InitGrade(Grade* gra);
void AddInfo(Grade* gra);
void ShowInfo(const Grade* gra);
void DelInfo(Grade* gra);
void SeaInfo(Grade* gra);
void ModInfo(Grade* gra);
void SorInfo(Grade* gra);




#endif _GRADE_H_ 
