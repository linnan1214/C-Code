//#include<stdio.h>
//#include<string.h>
////�ȶ�����һ��struct Stu �Ľṹ�壬��ʹ��typedef �Ͳ��ܶ��䶨��ڶ��Σ�ֻ��������ζ��������typedef
////���typedef�����������ֲ����������ṹ���������ͬ
//struct Stu//������һ��struct������ΪStu
//   {
//	  char name[20];
//	  char number[20];
//	  char sex[5];
//    };
//    typedef struct St//���������� struct Stu�ṹ������ ��Ϊ St
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
//void Type(struct Stu* t1,St* t2)//�ṹ����ú����Ļ�һ��ʹ��ָ�룬���ٶ�ջ��ռ����Ϊָ��
//	                            //ֻ��Ҫ����4/8�ֽڵĿռ䣬�������ָ�룬
//								//��ôԭ���ṹ���ж�����ú����Ļ���Ҫ������ͬ��С�Ľṹ��
//{
//	printf("�������ú�Ĵ�ӡ\n");
//	printf("%s %s %s\n",t1->name,t1->number,t1->sex);
//	printf("%s %s %s %s\n",t2->p,t2->s.name,t2->s.number,t2->s.sex);
//}
//int main()
//{
//	char arr[]="hellow";
//	struct book b1={"C���Գ���",50,'M'};
//	struct Stu s1={"����","214130","��"};//������һ��Stu�ṹ�����͵ı��� s1
//	St s2={"1",{"����","214130","Ů"},arr};//������һ��St���͵ı��� s2
//	printf("%s %s %s\n",s1.name,s1.number,s1.sex);
//	printf("%s %s %s %s\n",s2.p,s2.s.name,s2.s.number,s2.s.sex);
//	Type(&s1,&s2);
//	struct book* cd=&b1;//������һ�� struct book���͵�ָ����� cd ����ָ�� b1
//	printf("%s %d %c\n",cd->name,cd->price,cd->code);//cdָ��b1�ĳ�Աname
//	b1.price=100;//price�Ǳ������Կ��Ը�ֵ
//	printf("���˺�ļ۸��ǣ�\n");
//	printf("%d\n",b1.price);
////	b1.name="C++" �Ǵ���ģ�name�ǵ�ַ�����ܸ�ֵ��Ҫ����name���������Ҫ��strcpy����
//    strcpy(b1.name,"C++");// C++���ַ�����������""
//	printf("���˺�������ǣ�\n");
//	printf("%s\n",b1.name);
////	strcpy()����������Ҫ����#include<string.h>, C++ �ǿ������ݽ���������name�� 
////	printf("���˺��������%s\n",b1.name);
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
