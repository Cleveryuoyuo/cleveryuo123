#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h> //定义 strlen  计算字符串长度  %s  打印字符串
#include <math.h> //计算面积需要的头文件  
#include <Windows.h>// 使用Sleep这个停留函数需要的头文件
#include <stdlib.h> //使用system的头文件
int main()
{
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");   //如果这两条语句在FOR外面 则只能见到一次 所以必须在FOR里面
		scanf("%s", &password);
		if (strcmp("123456", password) == 0)// 这里不能写password==123456 字符串相等必须用strcmp
		{
			printf("输入成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	if (i == 3)
		printf("请一年后重试\n");
	return 0;
}




//int main()
//{
//	char arr1[] = "baige wo ai ni";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000);  // 休息1000毫秒=1秒
//		system("cls"); // system 执行系统命令的函数  cls 清空屏幕
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		
//	}
//	
//	
//	return 0;
//}

//int main()   //二分查找法
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}




//int main()
//{
//	float A,a,p, b, c;
//	
//	printf("请输入三个数:>");
//	scanf("%f %f %f", &a, &b, &c);
//	p = (a + b + c) / 2;
//	A = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("%f", A);
//
//	return 0;
//}



//int main()
//{
//	long a, b;
//	float x = 0, y = 0;
//	scanf("%d %d", &a, &b);
//	scanf("%f %f", &x, &y);
//	printf("a=%d,b=%d\n", a, b);
//	printf("x=%f,y=%f\n", x, y);
//	return 0;
//
//
//
//}




//int main()   //在有序数组中 找一个数
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int k = 7;
//	for (i = 0; i <= 10; i++)
//	{
//		if( k==arr[i])
//			printf("找到了，下标是：%d\n", i);
//		
//	}
//	if (i == 10)
//		printf("找不到");
//	return 0;
//}

//int main()     //求 1！+2！+3!+....+n!
//{
//	int i = 0;
//	int n = 0;
//	int s = 1; //不能给0 如果是0  一直都是0
//	int sum = 0;
//	for (n = 1; n <= 3; n++)  
//	{
//		s = s*n;   
//		sum = sum + s;    //简洁版算
//	}
//	printf("s=%d\n", sum); //如果数字太大 一个整型放不下 溢出
//	return 0;
//}




//int main()     //求 1！+2！+3!+....+n!
//{
//	int i = 0;
//	int n = 0;  
//	int s = 1; //不能给0 如果是0  一直都是0
//	int sum = 0; 
//	for (n = 1; n <= 3; n++)  //此处的判断 可以赋值给想要求的数
//	{
//		s = 1;
//		for (i = 1; i <= n; i++) //s=1*1  s=1*1*2 s=1*1*2*3 
//		{                        //如果不把s归零 会出现错误 s=2*1*2*3 s会不从1开始× 应该从1开始
//			s = s*i;
//		}
//		sum = sum + s;
//	}
//	printf("s=%d\n", sum); //如果数字太大 一个整型放不下 溢出
//	return 0;
//}



//int main()     //求 N的阶乘
//{
//	int i = 0;
//	int n = 0;
//	int s = 1; //不能给0 如果是0  一直都是0
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		s = s*i;
//	}
//	printf("s=%d\n", s); //如果数字太大 一个整型放不下 溢出
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) //没写判断语句 第二个 k=0的位置是判断位置，0为假 则不进行循环
//		k++;
//
//	return 0;
//}



//int main()
//{
//	int i = 0; 
//	int j = 0;
//	for (; i < 10; i++)  //如果省略了 i=0和下面的j=0 纸打印是个呵呵 不再是100个
//	{							//因为 当i=1时 j成为10 那么第二轮开始 J一直等于10 内FOR就不会再循环
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)  //判断部分省略则恒为真
//		printf("hehe\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 10; i++)  //前闭后开
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	//初始化 判断 调整
//	for (i = 1; i <= 10; i++)
//	{
//		if(i==5)
//			continue;// 这个
//			break;  //break 也是跳出终止符 纸打印 1234 到5就跳出了
//		printf("%d ", i);
//	}
//	return 0;
//}





//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')  //只会输出数字字符 不能输出别的
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}





//int main()
//{
//	int qwe = 0;
//	char ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	while (ch = getchar() != '\n' )    //  \n是字符串里潜在的最后一个东西
//	{
//		;
//	}
//	
//	getchar();                              //拿走输入缓冲区的\n
//	printf("请确认(Y/F)\n");
//	qwe = getchar();
//	if (qwe =='Y')
//	{
//		printf("确认通过");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//		
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != 0)
//	{
//		putchar(ch);
//	}
//	return 0;
//}