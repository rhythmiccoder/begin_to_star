#define _CRT_SECURE_MO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>

// �ҳ�1-100֮���������������ӡ����             ***************��Ҫ����whileѭ����ʹ��****************
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

//���û�����һ��1000���ڵ������жϸ����Ƿ�Ϊ����
//#define _CRT_SECURE_MO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char c;
//	printf("������һ��������1000��������\n");
//	while (a <= 1000)
//	{
//		scanf_s("%d", &a);
//		if (a <= 1000)
//		{
//			b = a % 2;
//			if (b == 1)
//			{
//				printf("���������Ϊ����\n");
//				//break;
//			}
//			else
//			{
//				printf("���������Ϊż��\n");
//				//break;
//			}
//		}
//		else
//		{
//			printf("����������ֳ����˷�Χ�����������룡\n");
//			a = 0;
//			//break;
//		}
//	}
//	return 0;
//}

//������ĳ����Χ������������ӡ����
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
//		//continue; !!!!!���û�ô�����׸
//	}
//	return 0;
//} 
//                                           **********����forѭ����ʹ��************
//
//int main()
//{                                             *******��ʼ��*********
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
//                                          *********�޸İ�***********
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

//****************����һ����n�Ľ׳�*****************//
//int main()                   //�ͼ��汾
//{
//    int a = 0;
//	int b = 1;
//	int c = 1;
//	int d = 0;
//	int e = 0;
//	printf("������һ��������");
//	scanf_s("%d", &a);
//	d = a;
//	while (a != 0)
//	{
//		e = b++;
//		e *= c;
//		c = e;
//		a--;
//	}
//	printf("\n%d�Ľ׳���:%d", d, c);
//}

//****************���װ�************************//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
// 	printf("������һ��������");
//	scanf_s("%d", &a);
//	c = a;
//	for (; a != 0; a--)
//	{
//		b *= a;
//	}
//	printf("%d�Ľ׳��ǣ�%d", c, b);
//}

// ***************���з��������������е�ĳ����*****************//
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
//		printf("������һ��1-10֮���������");
//		scanf_s("%d", &input);
//		if (input > left && input <= right)
//		{
//			while (left <= right)
//			{
//				mid = (left + right) / 2;     //****��Ҫ�ٴ�����*******/////
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
//					printf("����Ҫ���ҵ����ֵ��±�Ϊ��%d\n", mid);
//					break;
//				}
//			}
//		}
//		else
//		{
//			printf("�����ˣ���������������\n");
//		}
//	}
//	return 0;
//}
///******************ʵ��һ���ַ����������м���ʾ*****************//
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
//***************ģ���û���¼*******************//
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
//		printf("���������룺");
//		scanf("%s", &input);
//		if (strcmp(input,password) == 0)
//		{
//			printf("\n���ڵ�½���Ժ�...");
//			break;
//		}
//		else
//		{
//			printf("\n�����������������\n");
//			Sleep(200);
//			system("cls");
//		}
//
//	}
//	return 0;
//}
