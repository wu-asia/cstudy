#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


	/*
	结构体：
	定义的数据类型
	就是自由很多的数据组合的一个整体
	每一个数据，都是结构体的成员

	书写位置：
	函数的里面：局部位置，只能在本函数中使用
	函数的歪念：全局位置，在所有的函数中都可以使用
	*/
	struct girlfriend
	{
		char name[100];
		int age;
		char gender;
		double height;

	};
int main()
{
	//使用结构体，
	//定义一个女朋友类型的变量
	struct girlfriend gf1;
	strcpy(gf1.name, "消失时");
	gf1.age = 23;
	gf1.gender = 'F';
	gf1.height = 1.7;

	printf("")
	return 0;
}