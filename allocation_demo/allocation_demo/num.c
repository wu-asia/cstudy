#include<stdio.h>
#include<stdlib.h>
void bin(int num);
int main()
{
	int num = 6;
	bin(num);
	
	return 0;
}
//void bin(int num) 
//{
//    int binary[32]; // 假设32位整数
//    int i = 0;
//
//    // 处理0的特殊情况
//    if (num == 0) {
//        printf("0");
//        return;
//    }
//
//    // 除2取余
//    while (num > 0) {
//        binary[i] = num % 2;
//        num /= 2;
//        i++;
//    }
//
//    // 逆序输出
//    for (int j = i - 1; j >= 0; j--) {
//        printf("%d", binary[j]);
//    }
//}






void bin(int num)
{
	int arr[32];
	int i = 0;
	while (num > 0)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}
	
	for (int j = i-1; j >= 0; j--)
	{
		printf("%d",arr[j]);
	}
	
}



//void bin(int num)
//{
//	int number = 0;
//	while (num != 0)
//	{
//		int temp1=num % 2;
//		int temp2 = num / 2;
//		num = temp2;
//		number = number * 10 + temp1;
//	}
//	/*printf("%d\n", number);*/
//	int numb = 0;
//	while (number != 0)
//	{
//		int temp = number % 10;
//		numb = numb * 10 + temp;
//	}
//	printf("%d\n", numb);
//}