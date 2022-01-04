#define _CRT_SECURE_MO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

//
////**********将用户输入的三个数从大到小排序************//    方法一：条件判断法
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	int tmp = 0;
////	printf("请输入三个数：");
////	scanf("%d %d %d", &a, &b, &c);
////	if (a > b)
////	{
////		tmp = b;
////		if (b > c)
////			printf("从大到小的顺序为：%d %d %d\n",a,b,c);
////		else
////		{
////			if (a > c)
////			{
////				b = c;
////				c = b;
////				printf("从大到小的顺序为：%d %d %d\n", a, b, c);
////			}
////			else
////			{
////				b = a;
////				a = c;
////				c = tmp;
////				printf("从大到小的顺序为：%d %d %d\n", a, b, c);
////			}
////		}
////	}
////	else if (a < b)
////	{
////		tmp = a;
////		if (b > c)
////		{
////			if (a < c)
////			{
////				a = b;
////				b = c;
////				c = tmp;
////				printf("从大到小的顺序为：%d %d %d\n", a, b, c);
////
////			}
////		}
////		else
////		{
////			a = c;
////			c = tmp;
////			printf("从大到小的顺序为：%d %d %d\n", a, b, c);
////
////		}
////	}
////	return 0;
////}
//*******上一个太麻烦了，并且代码执行效率不高*********//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个整数：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("三个数从大到小的顺序为：%d %d %d", a, b, c);
//	return 0;
//}
////**********找出1-100之间所有3的倍数**************//
////int main()
////{
////	int a = 0;
////	for (a = 1; a < 101; a++)
////	{
////		if (a % 3 == 0)
////		{
////			printf("%d ", a);
////		}
////	}
////	printf("\n");
////	return 0;
////}
// **********寻找两个数的最大公约数**************//
// *********错误尝试***********//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数：");
//	scanf("%d %d", &a, &b);
//	while (1)
//	{
//		if (a % b == 0)
//		{
//			printf("%d和%d的最大公约数为：%d", a, b, b);
//			break;
//		}
//		else
//		{
//			c = rand(1);
//			if (a % c == 0)
//			{
//				if (b % c == 0)
//				{
//					printf("%d和%d的最大公约数为：%d", a, b, c);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
//**********正确版*********//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		//c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数为：%d", b);
//	return 0;
//}
//********计算1/1-1/2+1/3-1/4+......+1/99-1/100*********//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int symbow = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += symbow * 1.0 / i;
//		symbow = -symbow;
//	}
//	printf("结果是：%lf",sum);
//	return 0;
//}
// ************找出一组数中的最大值*****************//
//int main()
//{
//	int num1[10] = {66,2,4,33,8,3,22,5,13,73 };
//	int max = 0, b = 0;
//	int j = 0;
//	max = num1[0]; 
//	for (j = 1;j < 10 ; j++)
//	{
//		b = num1[j];
//		if (max < b)
//		{
//			max = b;
//		}
//	}
//	printf("最大的数为：%d", max);
//	return 0;
//}

//************打印一个乘法口诀表**************//
//int main()
//{
//	int i = 0, j = 0;
//	int mul = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			mul = i * j;
//			printf("%d * %d = %-2d  ", i, j, mul);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//**********二分法查找某个数************//
//int main()
//{
//	int num1[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(num1)/sizeof(num1[0]);
//	int k = 0;
//	int mid = (left +right)/2;
//	printf("请输入一个1-10之间的数：");
//	scanf("%d",&k);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k <num1[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > num1[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("您要找的数字的下标为：%d\n值为%d", mid, num1[mid]);
//			left = mid + 1;
//		}
//	}
//	return 0;
//}

//*****************猜数字游戏****************//
//void game()
//{
//	printf("现在进入猜数字游戏!\n");
//	srand((unsigned int)time(NULL));
//	int a = rand()%100+1;
//	int x = 0;
//	int times = 3;
//	printf("请输入一个数字：");
//	//scanf("%d",&x);
//	while (x != a)
//	{
//		scanf("%d", &x);
//		times--;
//		if (times == 0)
//		{
//			printf("机会已经用完！游戏重新开始\n");
//			break;
//		}
//		if (x > a)
//		{
//			printf("太大了，猜小一点吧！\n");
//			printf("请重新输入：");
//		}
//		else
//		{
//			printf("太小了，猜大一点吧！\n");
//			printf("请重新输入：");
//		}
//	}
//	if (x == a)
//		printf("猜对了，你真棒！\n");
//	a = 0;
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("**************************\n");
//	printf("***** 1.piay  0.exit *****\n");
//	printf("**************************\n");
//	printf("请选择：");
//	scanf("%d", &input);
//	do
//	{
//		switch (input)
//		{
//		case 1:
//			printf("正在进入游戏.....");
//			Sleep(1000);
//			system("cls");
//			game();
//
//			break;
//		case 0:
//			printf("正在退出游戏......");
//			Sleep(1000);
//			system("cls");
//			break;
//		default:
//			printf("出错了！！！请重新输入：");
//		}
//	} while (input);
//}
//*************关机恶搞小程序**************//
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("输入‘我是猪’即可取消，否则您的电脑将在一分钟内关机！！\n");
//
//		printf("请输入：");
//		scanf("%s", input);
//		if(strcmp(input,"我是猪") == 0)
//		{
//			printf("已取消！！！");
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}