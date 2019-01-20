#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define name_max  20
#define sex_max 10
#define tele_max 20
#define addr_max 30
#define people_max 1000
#define EIP_MAX  10

enum Choose
{
	EXIT,
	ADD,
	DEL,
	MODEFY,
	SEARCH,
	SHOW,
	SORT,

};

typedef struct PeopleInfo
{
	char name[name_max];
	int age;
	char sex[sex_max];
	char tele[tele_max];
	char addr[addr_max];
	char EIP[EIP_MAX];
}PeoInfo;
typedef struct Contact
{
	struct PeopleInfo data[people_max];
	int  sz;
}Contact;



void InitContact(Contact* con);
void AddInformation(Contact *con);
void ShowContact(const Contact *con);
void Delcontact(Contact *con);
void SearchContact(const Contact *con);
void ModefyContact( Contact *con);
void SortContact(Contact *con);

