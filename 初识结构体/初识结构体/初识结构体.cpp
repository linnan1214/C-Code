//#include<stdio.h>
//#include<string.h>
////先定义了一个struct Stu 的结构体，在使用typedef 就不能对其定义第二次，只能在其这次定义上添加typedef
////其次typedef重命名的名字不能与其他结构体的名字相同
//struct Stu//定义了一个struct类型名为Stu
//   {
//	  char name[20];
//	  char number[20];
//	  char sex[5];
//    };
//    typedef struct St//重新命名了 struct Stu结构体类型 名为 St
//   {
//	 char number[2];
//	 struct Stu s;
//	 char* p;
//	 
//    }St;
//	struct book
//	{
//		char name[20];
//	    short price;
//	    char code;
//	};
//void Type(struct Stu* t1,St* t2)//结构体调用函数的话一般使用指针，减少对栈区占用因为指针
//	                            //只需要开辟4/8字节的空间，如果不用指针，
//								//那么原来结构体有多大，引用函数的话又要创造相同大小的结构体
//{
//	printf("函数调用后的打印\n");
//	printf("%s %s %s\n",t1->name,t1->number,t1->sex);
//	printf("%s %s %s %s\n",t2->p,t2->s.name,t2->s.number,t2->s.sex);
//}
//int main()
//{
//	char arr[]="hellow";
//	struct book b1={"C语言程序",50,'M'};
//	struct Stu s1={"张三","214130","男"};//创建了一个Stu结构体类型的变量 s1
//	St s2={"1",{"李四","214130","女"},arr};//创建了一个St类型的变量 s2
//	printf("%s %s %s\n",s1.name,s1.number,s1.sex);
//	printf("%s %s %s %s\n",s2.p,s2.s.name,s2.s.number,s2.s.sex);
//	Type(&s1,&s2);
//	struct book* cd=&b1;//定义了一个 struct book类型的指针变量 cd 并且指向 b1
//	printf("%s %d %c\n",cd->name,cd->price,cd->code);//cd指向b1的成员name
//	b1.price=100;//price是变量所以可以赋值
//	printf("改了后的价格是：\n");
//	printf("%d\n",b1.price);
////	b1.name="C++" 是错误的，name是地址，不能赋值，要更改name里面的内容要用strcpy函数
//    strcpy(b1.name,"C++");// C++是字符串不能忘记""
//	printf("改了后的书名是：\n");
//	printf("%s\n",b1.name);
////	strcpy()拷贝函数，要引用#include<string.h>, C++ 是拷贝内容将它拷贝到name里 
////	printf("改了后的名字是%s\n",b1.name);
//}


#include<stdio.h>
int main()
{
	int i=0;
	char arr[]="abcde";
	char* pc=arr;
	printf("%s\n",arr);
	for(i=0;i<5;i++)
	{
		printf("%c\n",*(pc+i));
	}
}
