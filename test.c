#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //viod test()  ��һ����mindһ����˼����ͷ����
                    // extern ��������˼
#include<string.h>
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d  ", a); //���� 1-100������
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
//		printf("����\n");
//	else
//		printf("ż��\n");
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
//	int a = 10; //exp1?exp2:exp3; ��˼��exp�Ǳ��ʽ ���ʽ1���Ϊ�� ����ʽ2ִ��Ϊ�������ʽ��� ����ִ���� 
//	int b = 20;                    
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//
//	//int a = 1;
//	//int b = 3;
//	//int c = a&&b;   //�߼��� ����� 0��1�� ���ӡ1 �ٴ�ӡ0
//	//printf("%d\n", c);
//	//return 0;
//}


//int main()
//{
	//int a = 10;
	//int b = a++;//����++ ��ʹ��ֵ ����a++  �����Ȱ�a��ֵ����b,����a++���11  a=11 b=10
	//int b = ++a; //ǰ��++  ��++ ��ֵ��b ��ʹ��aҲ���11�� ����11
	//printf("a=%d\n  b=%d\n", a, b);
      //  --һ����˼
	//return 0;
//}









//int main()
//{
//	int a = 0;    //ռ���ĸ��ֽ� 32������λ ���� 000000.......   //~�� ��λ��������λ��ȡ�� �� 0-1��1-0
//	int b = ~a;  //
//	                 //Դ�� ����λ����������λȡ���õ� ���� ��һ ����
//	                  // ����λ������ǰ�����Ǹ�����  1 ��ʾ����
//	                 //�������ڴ��д洢 �洢���Ƕ����Ʋ���
//	printf("%d\n", b); //���-1����Ϊ
//	                  
//	return 0;
//}               // ���֪ʶ���ż�




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6};  //��������д int arr[6]={0} ��˵������ռ��6��
//	printf("%d\n", sizeof (arr));   //sizeof�Ǽ���ռ���ֽڴ�С��
//	return 0;
//}


//int max(int x, int y)  //��������ʽѡ�����ֵ      ///if (num1 > num2)
//                                                    //	printf("�ϴ�ֵ�ǣ�%d\n", num1);
//                                                    //else
//                                                    //	printf("�ϴ�ֵ�ǣ�%d\n", num2);
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
//{                  //static���κ����ı��������� ʹ��ɥʧ�ⲿ��������
//	static int i = 1;  //static �ھֲ���������ʹ���������������������
//                   //��ȫ���иı��˱����������� ����Դ�ļ��Ͳ�������
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