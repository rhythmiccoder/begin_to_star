#define _CRT_SECURE_MO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//**********库函数的学习***********//
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "今天也是学习的一天";
//	//strcpy  -string  字符    -copy     拷贝
//	//会将\0一同拷贝
//	strcpy(arr2,arr1);
//	printf("%s", arr2);
//	return 0;
//}

//memset
//memory - 内存  set   -设置
//int main()
//{
//	char arr[] = "Hello word";
//	memset(arr,'!', 5);
//	printf("%s",arr);
//	return 0;
//}

//********需求：定义一个函数实现将两个变量的值进行交换************//
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;          //之所以没有换成功是因为
//}                   //x,y,a,b分别具有一个不同的地址
//int main()          //x与y进行交换不代表a和b进行交换
//{                   //改进-将地址作为函数参数
//	int a = 520;
//	int b = 250;
//	printf("a = %d\nb = %d\n",a,b);
//	Swap(a, b);
//	printf("a = %d\nb = %d", a, b);
//	return 0;
//}


//**************改进版****************//
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
//***********自定义一个函数判断某个数是不是素数*************//
//
//int judge(int n)
//{
//	int m = 1;
//	for (m = 2; m < n; m++)     //此处的n可以改为sqrt(n)
//	{
//		if (n % m == 0)
//			return 0;
//			///break;         //return直接结束程序，而break仅仅只是结束本次循环
//	}                         //此除显然，只要能被其他数整除就不是素数，没必要继续循环
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
//	printf("一共有%d个素数",times);
//	return 0;
//}


//**********用函数调用法判断一个数是不是闰年***********//

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
//	printf("\n闰年一共有%d个",num);
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
//	int ret = 0;                             //一定要注意此处在调用函数时，参数（数组）传输的是首元素的地址
//	int sz = (sizeof(arr) / sizeof(arr[0])); //传入函数内的arr其本质为一个指针
//	printf("请输入一个数：");
//		scanf("%d", &input);
//		ret = half_search(arr, input, sz);
//		if (ret == -1)
//			printf("输入错误，请重新输入：");
//		else
//		{
//			printf("您要找的数字的下标为：%d", ret);
//		}	
//	return 0;
//}
