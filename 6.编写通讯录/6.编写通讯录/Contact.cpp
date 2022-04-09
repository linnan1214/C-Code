#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void InContact(struct Contact* ps)
{
	ps->size = 0;
}
void AddContact(struct Contact* ps)
{
	if (ps->size > MAX)
		printf("存满了\n");
	else
	{
		printf("请输入姓名：");
		scanf("%s", ps->data[ps->size].name);//因为是数组，数组名就是它的地址
		printf("\n请输入年龄：");
		scanf("%d",&(ps->data[ps->size].age));//这里是整形需要取地址！！！
		printf("\n请输入性别：");
		scanf("%s", ps->data[ps->size].sex);
		printf("\n请输入电话：");
		scanf("%s", ps->data[ps->size].tele);
		printf("\n请输入地址：");
		scanf("%s", ps->data[ps->size].adr);
		ps->size++;
		printf("添加成功\n");
	}
}
void ShowContact(struct Contact* ps)
{	
	if (ps->size == 0)
		printf("没有储存数据");
	else
	{
		int i = 0; 
		printf("%-10s\t%-4s\t%-4s\t%-11s\t%-20s\n","姓名","年龄","性别","电话","地址");
         for (i = 0; i < ps->size; i++)
	     { 
		  printf("%-10s\t%-4d\t%-4s\t%-11s\t%-20s\n",
			 ps->data[i].name,//这里是i，不是size
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
		if (0 == strcmp((ps->data[i].name), name))//这个是字符串不能直接比较
		{
			return i;
		}
	}
	return -1;
}
void SearchContact(struct Contact* ps)
{   
	char name[20] = { 0 };
	printf("请输入查找对象的名字：");
	scanf("%s", name);
	int ret = Findname(ps,name);
	if (ret >=0) 
	{
		printf("找到了\n");
		printf("%-10s\t%-4s\t%-4s\t%-11s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s\t%-4d\t%-4s\t%s-11\t%-20s\n",
			ps->data[ret].name,//这里是i，不是size
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].adr);
	}
	else
	{
		printf("找不到\n");
	}

}
void DeleteContact(struct Contact* ps)
{
	int i = 0;
	char name[20] = { 0 };
	printf("请输入删除对象：");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret >= 0)
	{
		for (i = 0; i < ps->size-1; i++)
		{
			//直接整体交换啊，干嘛非要一个成员一个成员的交换呢？
		  ps->data[ret] = ps->data[ret + 1];	
		}
		ps->size--;
		printf("删除成功\n");
	}
	else
	{
		printf("找不到删除对象");
	}
}
void ModifyContact(struct Contact* ps)
{
	char name[20] = { 0 };
	printf("请输入删除对象：");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret >= 0)
	{
		printf("请输入姓名：");
		scanf("%s", ps->data[ret].name);//因为是数组，数组名就是它的地址
		printf("\n请输入年龄：");
		scanf("%d", &(ps->data[ret].age));//这里是整形需要取地址！！！
		printf("\n请输入性别：");
		scanf("%s", ps->data[ret].sex);
		printf("\n请输入电话：");
		scanf("%s", ps->data[ret].tele);
		printf("\n请输入地址：");
		scanf("%s", ps->data[ret].adr);
		printf("修改成功\n");
	}
	else
	{
		printf("找不到修改对象");
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
