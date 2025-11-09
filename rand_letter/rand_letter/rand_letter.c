#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	char arr[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = '.';
		}
	}
	
	char c = 65;
	char letter[26];
	for(int i=0;i<26;i++)
	{
		letter[i] = (c + i);
	}
	

	
	
	int a = 0, b = 0;
	arr[0][0] = letter[0];
	int num = 0;
	/*while ((arr[a][b] != '.') && (a >= 0 && a <= 9) && (b >= 0 && b <= 9) && num < 26)
	{
		*/

	if ((arr[a - 1][b] == '.' || arr[a + 1][b] == '.' || arr[a][b - 1] == '.' || arr[a][b + 1] == '.') && num < 26)
	{
		while(arr[a - 1][b] == '.' || arr[a + 1][b] == '.' || arr[a][b - 1] == '.' || arr[a][b + 1] == '.')
		{
			if ((arr[a - 1][b] != '.' && arr[a + 1][b] != '.' && arr[a][b - 1] != '.' && arr[a][b + 1] != '.') || num >= 26)
			{
				break;
			}
			else
			{
				int flag = rand() % 4;//0上 1下 2左 3右 

				if (flag == 0 && arr[a - 1][b] == '.' && a > 0)
				{
					num++;
					arr[a - 1][b] = letter[num];
					a--;

				}
				
				if (flag == 1 && arr[a + 1][b] == '.' && a < 9)
				{
					num++;
					arr[a + 1][b] = letter[num];
					a++;
				}
				
				if (flag == 2 && arr[a][b - 1] == '.' && b > 0)
				{
					num++;
					arr[a][b - 1] = letter[num];
					b--;
				}
				
				if (flag == 3 && arr[a][b + 1] == '.' && b < 9)
				{
					num++;
					arr[a][b + 1] = letter[num];
					b++;
				}
				
			}
		}
	}
	/*else
	{
		breal;
	}*/
	
		
		
		/*else
		{
			break;
		}*/
	/*}*/
	arr[a][b] = '.';
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
//else
					//{
					//	int flag = rand() % 4;//0上 1下 2左 3右 
					//}
					// //else
					//{
					//	int flag = rand() % 4;//0上 1下 2左 3右 
					//}