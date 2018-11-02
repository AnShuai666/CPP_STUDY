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
	sperson Zhangzeyu;
	Zhangzeyu.age=20;
	Zhangzeyu.height=180;
	Zhangzeyu.name[20]="Zhang Zeyu";
	printf("Zhangzeyu's info:\n");
	printf("age:%d\n",Zhangzeyu.age);

	return 0;
}
