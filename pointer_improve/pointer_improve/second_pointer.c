//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void swap(void* p1, void* p2, int len);
//void bubble_sort(int arr[], int len);
//int main()
//{
//	/*int a = 10;
//	int* p1 = &a;
//	printf("%d\n", *p1);
//	printf("%p\n", p1);
//	printf("%d\n", a);
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p2 = &arr[1];
//	int* p3 = &arr[0];
//	printf("%p\n", p2);
//	printf("%p\n", p3);
//	printf("%d\n", p2 - p3);*/
//	/*
//	二级指针
//	格式：书记类型** 指针名
//	*/
//
//	//定义变量
//
//	//int a = 100;
//	//int b = 200;
//	////定义一级指针
//	//int* p1 = &a;
//	////定义二级指针
//	//int** p2 = &p1;
//	////作用一：利用二级指针修改一级指针里面记录的数据
//	//*p2 = &b;
//	//printf("a:%p\n", &a);
//	//printf("b:%p\n", &b);
//	//printf("p1:%p\n", p1);
//	//printf("p2:%p\n", p2);
//	////作用二：利用二级指针获取到变量记录的数据
//	//printf("%d\n", **p2);
//	//
//	/*int arr[] = { 10,20,30,40,50 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int* pa = &arr;
//	int* pb = &arr[0];
//	printf("%p\n", pa);
//	printf("%p\n", pb);*/
//
//
//	//int num1 = 10;
//	//int num2 = 20;
//	//int *p1 = &num1;
//	//int *p2 = &num2;
//	//printf("%d %d\n", num1, num2);
//	//swap(p1, p2, sizeof(int));
//	//printf("%d %d\n", num1, num2);
//	
//	/*int arr[] = { 1,2,3,4,5,6,251,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int* p1 = arr;
//	int* p2 = &arr;
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", *(p1 + i));
//	}*/
//
//	/*int arr[3][5] =
//	{
//		{1,2,3,4,5},
//		{6,7,8,9,10},
//		{11,12,13,14,15}
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d\t", arr[i][j]);
//		}	
//		printf("\n");
//	}*/
//	//加菲猫乔恩欧弟
//
//	////1.定义三个一维数组
//	//int arr1[] = { 1,2,3 };
//	//int arr2[] = { 1,2,3,4,5 };
//	//int arr3[] = { 1,2,3,4,5,6,7,8,9 };
//	////2.把三个一维数组放入到数组当中
//	////数组的数据类型，跟内部内存的元素类型保持一致
//	//int len1 = sizeof(arr1) / sizeof(int);
//	//int len2 = sizeof(arr2) / sizeof(int);
//	//int len3 = sizeof(arr3) / sizeof(int);
//	//int len_arr[] = { len1,len2,len3 };
//	//int* arr[3] = { arr1,arr2,arr3 };
//	////3.利用索引遍历arr
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	//i:依次表示二维数组的索引
//	//	
//	//	for (int j = 0; j < len_arr[i]; j++)
//	//	{
//	//		printf("%d\t", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//int arr1[] = { 1,2,3 };
//	//int arr2[5] = { 1,2,3,4,5 };
//	//int arr3[9] = { 1,2,3,4,5,6,7,8,9 };
//
//	//int len1 = sizeof(arr1) / sizeof(int);
//	//int len2 = sizeof(arr2) / sizeof(int);
//	//int len3 = sizeof(arr3) / sizeof(int);
//
//	//int* arr[3] = {arr1,arr2,arr3};
//	//int len_arr[3] = { len1,len2,len3 };
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < len_arr[i]; j++)
//	//	{
//	//		printf("%d\t", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	/*int arrA[3][5] =
//	{
//		{1,2,3,4,5},
//		{11,22,33,44,55},
//		{111,222,333,444,555}
//	};
//	
//	int(*p)[5] = arrA;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d\t", *(*p + j));
//		}
//		printf("\n");
//		p++;
//	}*/
//int arrB[] = { 3,2,1,5,4 };
//int len = sizeof(arrB) / arr(arrB[0]);
//bubble_sort(arrB, len);
//for (int i = 0; i < len; i++)
//{
//	printf("%d\n", arrB[i]);
//		
//}
//return 0;
//}
//
//void swap(void* p1, void* p2,int len)
//{
//	char* pc1 = p1;
//	char* pc2 = p2;
//	for (int i = 0; i < len; i++)
//	{
//		int temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//		pc1++;
//		pc2++;
//	}
//}
//
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//}