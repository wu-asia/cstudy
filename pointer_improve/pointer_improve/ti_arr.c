#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(void* p1, void* p2, int len);
void bubble_sort(int arr[], int len);
int main()
{
	int arrB[] = { 3,2,1,5,4 };
	int len = sizeof(arrB) / arr(arrB[0]);
	bubble_sort(arrB, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arrB[i]);

	}
	return 0;
}

void swap(void* p1, void* p2, int len)
{
	char* pc1 = p1;
	char* pc2 = p2;
	for (int i = 0; i < len; i++)
	{
		int temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;
		pc1++;
		pc2++;
	}
}

void bubble_sort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}