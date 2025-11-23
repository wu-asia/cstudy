//#include<stdio.h>
//#include<string.h>
//
//union moneyType
//{
//	int moni;
//	double mond;
//	char monstr[100];
//};
//int main()
//{
//	/*
//	共同体的特点：
//	1.共同体，也叫做联合体，共用体
//	2.所有的变量都是有同一个内存空间
//	3.每次只能给一个变量进行赋值
//	4.所有的内存大小 = 最大成员的长度（也受内存对齐影响）
//	细节：一最大成员的长度为准
//	总大小一定是最大成员的整数倍*/
//
//	/*union moneyType money;
//
//	printf("%p\n", &(money.moni));
//	printf("%p\n", &(money.mond));
//	printf("%p\n", &(money.monstr));
//
//	printf("%zu\n", sizeof(money.mond));
//	printf("%zu\n", sizeof(money.moni));
//	printf("%zu\n", sizeof(money.monstr));
//	printf("%zu\n", sizeof(money));*/
//
//	union moneyType money;
//
//	//money.moni = 99;
//	//printf("%d\n", money.moni);
//
//	//money.mond = 1.23;
//	//printf("%lf\n", money.mond);
//
//	//strcpy(money.monstr, "101万");
//	//printf("%s\n", money.monstr);
//
//	money.mond = 1.23;
//	money.moni = 99;
//	//printf("%d\n", money.moni);
//		printf("%lf\n", money.mond);
//	return 0;
//}