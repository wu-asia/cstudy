#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	malloc  申请空间（连续）
	calloc  申请空间 + 数据初始化
	realloc 修改空间大小
	free    释放空间*/
	//1.利用malloc函数申请一片连续的空间
	//虚伪iu：申请一片空间，要储存100个int类型的整数
	//返回这篇空间的首地址
	int* p = malloc(100 * sizeof(int));

	printf("%p\n", p);//打印的是malloc的内存地址
	printf("%d\n", *p);//解引指针，输出结果是
	//2.赋值
	for (int i = 0; i < 100; i++)
	{
		//第一种赋值方式
		p + i;
	}
	return 0;
}


