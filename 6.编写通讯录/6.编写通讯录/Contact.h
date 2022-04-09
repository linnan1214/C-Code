#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
//存储每个人的哪些信息
struct PeoMessage
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];//如果是int的话 11位电话超出它最大范围了
	char adr[100];
};

//存放1000人的信息
//通讯录类型
struct Contact
{
	struct PeoMessage data[MAX];
	//判断存入多少人的信息了
	int size;
};
//switch 中的选择
enum Option
{
	Exit,
	Add,
	Delete,
	Show,
	Search,
	Sort,
	Modify
};
//函数声明
void InContact(struct Contact* per);//初始化
void AddContact(struct  Contact* per);
void DeleteContact(struct Contact* per);
void ShowContact(struct Contact* per);
void SearchContact(struct Contact* per);
//void SoContact(struct Contact* per);
void ModifyContact(struct Contact* per);