#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void InContact(struct Contact* ps)
{
	ps->size = 0;
}
void AddContact(struct Contact* ps)
{
	if (ps->size > MAX)
		printf("������\n");
	else
	{
		printf("������������");
		scanf("%s", ps->data[ps->size].name);//��Ϊ�����飬�������������ĵ�ַ
		printf("\n���������䣺");
		scanf("%d",&(ps->data[ps->size].age));//������������Ҫȡ��ַ������
		printf("\n�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("\n������绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("\n�������ַ��");
		scanf("%s", ps->data[ps->size].adr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void ShowContact(struct Contact* ps)
{	
	if (ps->size == 0)
		printf("û�д�������");
	else
	{
		int i = 0; 
		printf("%-10s\t%-4s\t%-4s\t%-11s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
         for (i = 0; i < ps->size; i++)
	     { 
		  printf("%-10s\t%-4d\t%-4s\t%-11s\t%-20s\n",
			 ps->data[i].name,//������i������size
			 ps->data[i].age,
			 ps->data[i].sex,
	     	 ps->data[i].tele,
		     ps->data[i].adr);
	     }
	}
}
int Findname(struct Contact* ps,char name[20])
{
	int i = 0;
	for ( i = 0; i < ps->size; i++)
	{
		if (0 == strcmp((ps->data[i].name), name))//������ַ�������ֱ�ӱȽ�
		{
			return i;
		}
	}
	return -1;
}
void SearchContact(struct Contact* ps)
{   
	char name[20] = { 0 };
	printf("��������Ҷ�������֣�");
	scanf("%s", name);
	int ret = Findname(ps,name);
	if (ret >=0) 
	{
		printf("�ҵ���\n");
		printf("%-10s\t%-4s\t%-4s\t%-11s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s\t%-4d\t%-4s\t%s-11\t%-20s\n",
			ps->data[ret].name,//������i������size
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].adr);
	}
	else
	{
		printf("�Ҳ���\n");
	}

}
void DeleteContact(struct Contact* ps)
{
	int i = 0;
	char name[20] = { 0 };
	printf("������ɾ������");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret >= 0)
	{
		for (i = 0; i < ps->size-1; i++)
		{
			//ֱ�����彻�����������Ҫһ����Աһ����Ա�Ľ����أ�
		  ps->data[ret] = ps->data[ret + 1];	
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("�Ҳ���ɾ������");
	}
}
void ModifyContact(struct Contact* ps)
{
	char name[20] = { 0 };
	printf("������ɾ������");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret >= 0)
	{
		printf("������������");
		scanf("%s", ps->data[ret].name);//��Ϊ�����飬�������������ĵ�ַ
		printf("\n���������䣺");
		scanf("%d", &(ps->data[ret].age));//������������Ҫȡ��ַ������
		printf("\n�������Ա�");
		scanf("%s", ps->data[ret].sex);
		printf("\n������绰��");
		scanf("%s", ps->data[ret].tele);
		printf("\n�������ַ��");
		scanf("%s", ps->data[ret].adr);
		printf("�޸ĳɹ�\n");
	}
	else
	{
		printf("�Ҳ����޸Ķ���");
	}
}
//int com_by_name(const void* e1, const void* e20)
//{
//	return strcmp((struct PeoMessage)*e1->name, (struct PeoMessage)*e2->name);
//}
//void SortContact(struct Contact* ps)
//{
//	qsort(ps->data, ps->size, sizeof(ps->data[0]), com_by_name);
//}
