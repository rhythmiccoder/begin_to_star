#define _CRT_SECURE_MO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

//
////**********���û�������������Ӵ�С����************//    ����һ�������жϷ�
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	int tmp = 0;
////	printf("��������������");
////	scanf("%d %d %d", &a, &b, &c);
////	if (a > b)
////	{
////		tmp = b;
////		if (b > c)
////			printf("�Ӵ�С��˳��Ϊ��%d %d %d\n",a,b,c);
////		else
////		{
////			if (a > c)
////			{
////				b = c;
////				c = b;
////				printf("�Ӵ�С��˳��Ϊ��%d %d %d\n", a, b, c);
////			}
////			else
////			{
////				b = a;
////				a = c;
////				c = tmp;
////				printf("�Ӵ�С��˳��Ϊ��%d %d %d\n", a, b, c);
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
////				printf("�Ӵ�С��˳��Ϊ��%d %d %d\n", a, b, c);
////
////			}
////		}
////		else
////		{
////			a = c;
////			c = tmp;
////			printf("�Ӵ�С��˳��Ϊ��%d %d %d\n", a, b, c);
////
////		}
////	}
////	return 0;
////}
//*******��һ��̫�鷳�ˣ����Ҵ���ִ��Ч�ʲ���*********//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("����������������");
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
//	printf("�������Ӵ�С��˳��Ϊ��%d %d %d", a, b, c);
//	return 0;
//}
////**********�ҳ�1-100֮������3�ı���**************//
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
// **********Ѱ�������������Լ��**************//
// *********������***********//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d %d", &a, &b);
//	while (1)
//	{
//		if (a % b == 0)
//		{
//			printf("%d��%d�����Լ��Ϊ��%d", a, b, b);
//			break;
//		}
//		else
//		{
//			c = rand(1);
//			if (a % c == 0)
//			{
//				if (b % c == 0)
//				{
//					printf("%d��%d�����Լ��Ϊ��%d", a, b, c);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
//**********��ȷ��*********//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		//c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("���Լ��Ϊ��%d", b);
//	return 0;
//}
//********����1/1-1/2+1/3-1/4+......+1/99-1/100*********//
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
//	printf("����ǣ�%lf",sum);
//	return 0;
//}
// ************�ҳ�һ�����е����ֵ*****************//
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
//	printf("������Ϊ��%d", max);
//	return 0;
//}

//************��ӡһ���˷��ھ���**************//
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

//**********���ַ�����ĳ����************//
//int main()
//{
//	int num1[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(num1)/sizeof(num1[0]);
//	int k = 0;
//	int mid = (left +right)/2;
//	printf("������һ��1-10֮�������");
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
//			printf("��Ҫ�ҵ����ֵ��±�Ϊ��%d\nֵΪ%d", mid, num1[mid]);
//			left = mid + 1;
//		}
//	}
//	return 0;
//}

//*****************��������Ϸ****************//
//void game()
//{
//	printf("���ڽ����������Ϸ!\n");
//	srand((unsigned int)time(NULL));
//	int a = rand()%100+1;
//	int x = 0;
//	int times = 3;
//	printf("������һ�����֣�");
//	//scanf("%d",&x);
//	while (x != a)
//	{
//		scanf("%d", &x);
//		times--;
//		if (times == 0)
//		{
//			printf("�����Ѿ����꣡��Ϸ���¿�ʼ\n");
//			break;
//		}
//		if (x > a)
//		{
//			printf("̫���ˣ���Сһ��ɣ�\n");
//			printf("���������룺");
//		}
//		else
//		{
//			printf("̫С�ˣ��´�һ��ɣ�\n");
//			printf("���������룺");
//		}
//	}
//	if (x == a)
//		printf("�¶��ˣ��������\n");
//	a = 0;
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("**************************\n");
//	printf("***** 1.piay  0.exit *****\n");
//	printf("**************************\n");
//	printf("��ѡ��");
//	scanf("%d", &input);
//	do
//	{
//		switch (input)
//		{
//		case 1:
//			printf("���ڽ�����Ϸ.....");
//			Sleep(1000);
//			system("cls");
//			game();
//
//			break;
//		case 0:
//			printf("�����˳���Ϸ......");
//			Sleep(1000);
//			system("cls");
//			break;
//		default:
//			printf("�����ˣ��������������룺");
//		}
//	} while (input);
//}
//*************�ػ����С����**************//
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("���롮����������ȡ�����������ĵ��Խ���һ�����ڹػ�����\n");
//
//		printf("�����룺");
//		scanf("%s", input);
//		if(strcmp(input,"������") == 0)
//		{
//			printf("��ȡ��������");
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}