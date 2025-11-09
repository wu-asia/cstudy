#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num = 10*sizeof(int);
	int* p = malloc(num);
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = (i + 1) * 10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
}
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	//malloc 申请的空间过多，会产生虚拟内存
//	//表示单词申请空间的字节大小（1G）
//
//	int num = 1024*1024*1024*1024;
//	//利用循环不断的申请空间
//	//malloc 申请空间（连续）
//	//如果申请空间成功，返回空间的首地址
//	//如果申请空间失败，返回NULL
//	
//	int count = 0;
//	while (1)
//	{
//		int* p = malloc(num);
//		count++;
//		if (p == NULL)
//		{
//			printf("申请空间失败。");
//			break;
//		}
//		printf("第%d次申请空间成功：%p\n", count, *p);
//		free(p);
//	}
//}

