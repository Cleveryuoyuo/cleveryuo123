#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //viod test()  是一个和mind一个意思的起头函数
                    // extern 声明的意思
#include<string.h>
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d  ", a); //输入 1-100的奇数
//		a++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	
//	if (a%2==1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}



//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}



//int main()
//{
//	int a = 10; //exp1?exp2:exp3; 意思是exp是表达式 表达式1结果为真 则表达式2执行为整个表达式结果 否则执行三 
//	int b = 20;                    
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//
//	//int a = 1;
//	//int b = 3;
//	//int c = a&&b;   //逻辑与 看真假 0假1真 真打印1 假打印0
//	//printf("%d\n", c);
//	//return 0;
//}


//int main()
//{
	//int a = 10;
	//int b = a++;//后置++ 先使用值 在让a++  就是先把a的值赋给b,再让a++变成11  a=11 b=10
	//int b = ++a; //前置++  先++ 赋值给b 再使用a也变成11了 两个11
	//printf("a=%d\n  b=%d\n", a, b);
      //  --一个意思
	//return 0;
//}









//int main()
//{
//	int a = 0;    //占用四个字节 32个比特位 就是 000000.......   //~叫 按位（二进制位）取反 即 0-1，1-0
//	int b = ~a;  //
//	                 //源码 符号位不变其他按位取反得到 反码 加一 补码
//	                  // 符号位就是最前方的那个数字  1 表示负数
//	                 //－数在内存中存储 存储的是二进制补码
//	printf("%d\n", b); //输出-1是因为
//	                  
//	return 0;
//}               // 这个知识不着急




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6};  //或者这样写 int arr[6]={0} 这说明数组占用6个
//	printf("%d\n", sizeof (arr));   //sizeof是计算占用字节大小。
//	return 0;
//}


//int max(int x, int y)  //函数的形式选择最大值      ///if (num1 > num2)
//                                                    //	printf("较大值是：%d\n", num1);
//                                                    //else
//                                                    //	printf("较大值是：%d\n", num2);
//{ 
//	if (x > y)
//		return x;
//	else 
//		return y;
//
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	
//	int a = 0;
//	a = max(num1, num2);
//	printf("max=%d\n", a);
//
//
//	return 0;
//}


//void test()
//{                  //static修饰函数改变了作用域 使其丧失外部链接属性
//	static int i = 1;  //static 在局部变量可以使这个变量保留下来不销毁
//                   //在全局中改变了变量的作用域 出了源文件就不能用了
//	i++;                
//	printf("%d ", i);  
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<5; i++)
//	{
//		test();
//	}
//	return 0;
//}





//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",& a,& b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	return 0;
//}