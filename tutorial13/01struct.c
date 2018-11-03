#include <stdio.h>
/*
struct person
{
	int age;
	float height;
	char name[20];
};
*/
typedef struct //person
{
	int age;
	float height;
	char name[20];
} sperson;

//typedef struct person sperson;


int main()
{
	//struct person Zhangzeyu;
	sperson Zhangzeyu = {20,1.80f,"ZhangZeyu"};
	Zhangzeyu.age = 20;
	Zhangzeyu.height = 180;
	Zhangzeyu.name[20] = "Zhang Zeyu";
	printf("Zhangzeyu's info:\n");
	printf("age:%d\n",Zhangzeyu.age);

	sperson person1;
	printf("请输入年龄：");
	scanf("%d",&(person1.age));
	printf("请输入身高：");
	scanf("%g",&(person1.height));
	scanf("%*[^\n]");
	scanf("%*c");

	printf("请输入姓名：");
	fgets(person1.name,20,stdin);
	
	sperson person2 = person1;
	
	printf("姓名是：%s",person1.name);
	printf("年龄是：%d\n",person1.age);
	printf("身高是：%g\n",person1.height);
	
	printf("姓名是：%s",person2.name);
	printf("年龄是：%d\n",person2.age);
	printf("身高是：%g\n",person2.height);

	sperson * p_person;
	p_person = &person1;
	printf("姓名是：%s",p_person->name);
	printf("年龄是：%d\n",p_person->age);
	printf("身高是：%g\n",p_person->height);
	return 0;
}
