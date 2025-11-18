#include<stdio.h>
#include<string>

struct student
{
	char name[100];
	int age;
};

int main()
{
	struct student stu1 = { "zhangsan",23 };
	struct student stu2 = { "lisi",24 };
	struct student stu3 = { "wangwu",25 };

	struct  student stu_arr[3] = { stu1,stu2,stu3 };

	for (int i = 0; i < 3; i++)
	{
		struct student temp = stu_arr[i];
		printf("%sµÄÄêÁäÎª%d", temp.name, temp.age);
	}
	return 0;
}
