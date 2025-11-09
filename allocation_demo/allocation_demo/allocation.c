//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
///*
//malloc:申请空间（连续）
//calloc申请空间+数据初始化
//realloc修改空间大小
//free 释放空间
//*/
//int main()
//{
//	//申请一个空间
//	int* p = malloc(10 * sizeof(int));//申请一个大小为一百个int字节的空间
//	//printf("%p\n", p);
//	//int* p = calloc(10, sizeof(int));
//	
//
//	for (int i = 0; i < 10; i++)
//	{
//		//*(p + i) = (i + 1) * 10;
//		//p[i] = (i + 1) * 10;   //代码底层逻辑：将p[i]->p+i;因此i[p]也是同理的
//		i[p] = (i + 1) * 10;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//
//	//扩容，使用realloc函数进行扩容
//	int* pp = realloc(p, 20 * sizeof(int));
//	//realloc函数的原理：将原来申请的空间进行复制，而不会对原先的空间进行覆盖
//	
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	//释放空间free
//	free(p);
//	return 0;
//}