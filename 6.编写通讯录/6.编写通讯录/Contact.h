#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
//�洢ÿ���˵���Щ��Ϣ
struct PeoMessage
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];//�����int�Ļ� 11λ�绰���������Χ��
	char adr[100];
};

//���1000�˵���Ϣ
//ͨѶ¼����
struct Contact
{
	struct PeoMessage data[MAX];
	//�жϴ�������˵���Ϣ��
	int size;
};
//switch �е�ѡ��
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
//��������
void InContact(struct Contact* per);//��ʼ��
void AddContact(struct  Contact* per);
void DeleteContact(struct Contact* per);
void ShowContact(struct Contact* per);
void SearchContact(struct Contact* per);
//void SoContact(struct Contact* per);
void ModifyContact(struct Contact* per);