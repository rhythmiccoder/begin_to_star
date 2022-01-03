#define _CRT_SECURE_MO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>

// 找出1-100之间的所有奇数并打印出来             ***************主要侧重while循环的使用****************
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (a < 100)
//	{
//		b = a % 2;
//		if (b == 1)
//			printf("%d ", a);
//		a++;
//	}
//
//	return 0;
//}

//让用户输入一个1000以内的数并判断该数是否为奇数
//#define _CRT_SECURE_MO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char c;
//	printf("请输入一个不大于1000的整数：\n");
//	while (a <= 1000)
//	{
//		scanf_s("%d", &a);
//		if (a <= 1000)
//		{
//			b = a % 2;
//			if (b == 1)
//			{
//				printf("您输入的数为奇数\n");
//				//break;
//			}
//			else
//			{
//				printf("您输入的数为偶数\n");
//				//break;
//			}
//		}
//		else
//		{
//			printf("您输入的数字超出了范围，请重新输入！\n");
//			a = 0;
//			//break;
//		}
//	}
//	return 0;
//}

//将满足某个范围的所有数都打印出来
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a < 25 || a > 75)
//		{
//			printf("%d ", a);
//		}
//		a++;
//		//continue; !!!!!这个没用纯属累赘
//	}
//	return 0;
//} 
//                                           **********侧重for循环的使用************
//
//int main()
//{                                             *******初始版*********
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a < 25 || a > 75)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//
//}
//                                          *********修改版***********
//
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a > 25 && a < 75)
//		{
//			continue;
//		}
//		printf("%d ",a);
//	}
//}

//****************计算一个数n的阶乘*****************//
//int main()                   //低级版本
//{
//    int a = 0;
//	int b = 1;
//	int c = 1;
//	int d = 0;
//	int e = 0;
//	printf("请输入一个整数：");
//	scanf_s("%d", &a);
//	d = a;
//	while (a != 0)
//	{
//		e = b++;
//		e *= c;
//		c = e;
//		a--;
//	}
//	printf("\n%d的阶乘是:%d", d, c);
//}

//****************进阶版************************//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
// 	printf("请输入一个整数：");
//	scanf_s("%d", &a);
//	c = a;
//	for (; a != 0; a--)
//	{
//		b *= a;
//	}
//	printf("%d的阶乘是：%d", c, b);
//}

// ***************折中法查找有序数据中的某个数*****************//
//int main()
//{
//	while (1)
//	{
//		int input = 0;
//		int left = 0;
//		int num1[] = {1,2,3,4,5,6,7,8,9,10};
//		int right = sizeof(num1)/sizeof(num1[0]);
//		int mid = 0;
//		printf("%d", sizeof(num1));
//		printf("请输入一个1-10之间的整数：");
//		scanf_s("%d", &input);
//		if (input > left && input <= right)
//		{
//			while (left <= right)
//			{
//				mid = (left + right) / 2;     //****不要再粗心了*******/////
//				if (input > num1[mid])
//				{
//					left = mid + 1;
//				}
//				else if (input < num1[mid])
//				{
//					right = mid - 1;
//				}
//				else
//				{
//					printf("您需要查找的数字的下标为：%d\n", mid);
//					break;
//				}
//			}
//		}
//		else
//		{
//			printf("出错了！！！请重新输入\n");
//		}
//	}
//	return 0;
//}
///******************实现一串字符从两端向中间显示*****************//
//#include <windows.h>
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int times = 0;
//	int left = 0;
//	char sentence[] = "Wlecome to code word!";
//	char blank[] = "                     ";
//	int right = strlen(sentence) - 1 ;
//	times = strlen(sentence)/2 ;
//	for (; times != 0; times--)
//	{
//		blank[left] = sentence[left];
//		blank[right] = sentence[right];
//		printf("%s\n", blank);
//		Sleep (1000);
//		system("cls");
//		right--;
//		left++;
//	}
//	printf("%s", blank);
//	return 0;
//}
//***************模拟用户登录*******************//
//#define _CRT_SECURE_MO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int times = 3;
//	char a = 1;
//	char input[20] = {0};
//	char password[] = "123456";
//	for (times = 3; times != 0; times--)
//	{
//		a++;
//		printf("请输入密码：");
//		scanf("%s", &input);
//		if (strcmp(input,password) == 0)
//		{
//			printf("\n正在登陆请稍后...");
//			break;
//		}
//		else
//		{
//			printf("\n密码错误！请重新输入\n");
//			Sleep(200);
//			system("cls");
//		}
//
//	}
//	return 0;
//}
