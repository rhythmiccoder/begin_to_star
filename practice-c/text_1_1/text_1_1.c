#define _CRT_SECURE_MO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//**********�⺯����ѧϰ***********//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "����Ҳ��ѧϰ��һ��";
//	//strcpy  -string  �ַ�    -copy     ����
//	//�Ὣ\0һͬ����
//	strcpy(arr2,arr1);
//	printf("%s", arr2);
//	return 0;
//}

//memset
//memory - �ڴ�  set   -����
//int main()
//{
//	char arr[] = "Hello word";
//	memset(arr,'!', 5);
//	printf("%s",arr);
//	return 0;
//}

//********���󣺶���һ������ʵ�ֽ�����������ֵ���н���************//
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;          //֮����û�л��ɹ�����Ϊ
//}                   //x,y,a,b�ֱ����һ����ͬ�ĵ�ַ
//int main()          //x��y���н���������a��b���н���
//{                   //�Ľ�-����ַ��Ϊ��������
//	int a = 520;
//	int b = 250;
//	printf("a = %d\nb = %d\n",a,b);
//	Swap(a, b);
//	printf("a = %d\nb = %d", a, b);
//	return 0;
//}


//**************�Ľ���****************//
//void Swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 520;
//	int b = 250;
//	printf("a = %d   b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d   b = %d", a, b);
//	return 0;
//}
//***********�Զ���һ�������ж�ĳ�����ǲ�������*************//
//
//int judge(int n)
//{
//	int m = 1;
//	for (m = 2; m < n; m++)     //�˴���n���Ը�Ϊsqrt(n)
//	{
//		if (n % m == 0)
//			return 0;
//			///break;         //returnֱ�ӽ������򣬶�break����ֻ�ǽ�������ѭ��
//	}                         //�˳���Ȼ��ֻҪ�ܱ������������Ͳ���������û��Ҫ����ѭ��
//	//if (m == n)
//	//{
//		return 1;
//	//}
//}
//int main()
//{ 
//	int i = 0;
//	int times = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (judge(i) == 1)
//		{
//			printf("%d\n", i);
//			times++;
//		}
//	}
//	printf("һ����%d������",times);
//	return 0;
//}


//**********�ú������÷��ж�һ�����ǲ�������***********//

//int judge(n)
//{
//	if ((n % 4 == 0 && n % 100 ) ==  1)
//	{
//		return 1;
//	}
//	if (n % 400 == 0)
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (judge(i) == 1)
//		{
//			printf("%d  ",i);
//			num++;
//		}
//	}
//	printf("\n����һ����%d��",num);
//}
//
//
//int half_search(int arr[],int b, int c)
//{
//	int left = 0;
//	int right = c -1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (b > arr[mid])
//			left = mid + 1;
//		else if (b < arr[mid])
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int input = 0;
//	int ret = 0;                             //һ��Ҫע��˴��ڵ��ú���ʱ�����������飩���������Ԫ�صĵ�ַ
//	int sz = (sizeof(arr) / sizeof(arr[0])); //���뺯���ڵ�arr�䱾��Ϊһ��ָ��
//	printf("������һ������");
//		scanf("%d", &input);
//		ret = half_search(arr, input, sz);
//		if (ret == -1)
//			printf("����������������룺");
//		else
//		{
//			printf("��Ҫ�ҵ����ֵ��±�Ϊ��%d", ret);
//		}	
//	return 0;
//}
