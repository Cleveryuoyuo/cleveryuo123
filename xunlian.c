#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h> //���� strlen  �����ַ�������  %s  ��ӡ�ַ���
#include <math.h> //���������Ҫ��ͷ�ļ�  
#include <Windows.h>// ʹ��Sleep���ͣ��������Ҫ��ͷ�ļ�
#include <stdlib.h> //ʹ��system��ͷ�ļ�
int main()
{
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");   //��������������FOR���� ��ֻ�ܼ���һ�� ���Ա�����FOR����
		scanf("%s", &password);
		if (strcmp("123456", password) == 0)// ���ﲻ��дpassword==123456 �ַ�����ȱ�����strcmp
		{
			printf("����ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (i == 3)
		printf("��һ�������\n");
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
//		Sleep(1000);  // ��Ϣ1000����=1��
//		system("cls"); // system ִ��ϵͳ����ĺ���  cls �����Ļ
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		
//	}
//	
//	
//	return 0;
//}

//int main()   //���ֲ��ҷ�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}




//int main()
//{
//	float A,a,p, b, c;
//	
//	printf("������������:>");
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




//int main()   //������������ ��һ����
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int k = 7;
//	for (i = 0; i <= 10; i++)
//	{
//		if( k==arr[i])
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//		
//	}
//	if (i == 10)
//		printf("�Ҳ���");
//	return 0;
//}

//int main()     //�� 1��+2��+3!+....+n!
//{
//	int i = 0;
//	int n = 0;
//	int s = 1; //���ܸ�0 �����0  һֱ����0
//	int sum = 0;
//	for (n = 1; n <= 3; n++)  
//	{
//		s = s*n;   
//		sum = sum + s;    //������
//	}
//	printf("s=%d\n", sum); //�������̫�� һ�����ͷŲ��� ���
//	return 0;
//}




//int main()     //�� 1��+2��+3!+....+n!
//{
//	int i = 0;
//	int n = 0;  
//	int s = 1; //���ܸ�0 �����0  һֱ����0
//	int sum = 0; 
//	for (n = 1; n <= 3; n++)  //�˴����ж� ���Ը�ֵ����Ҫ�����
//	{
//		s = 1;
//		for (i = 1; i <= n; i++) //s=1*1  s=1*1*2 s=1*1*2*3 
//		{                        //�������s���� ����ִ��� s=2*1*2*3 s�᲻��1��ʼ�� Ӧ�ô�1��ʼ
//			s = s*i;
//		}
//		sum = sum + s;
//	}
//	printf("s=%d\n", sum); //�������̫�� һ�����ͷŲ��� ���
//	return 0;
//}



//int main()     //�� N�Ľ׳�
//{
//	int i = 0;
//	int n = 0;
//	int s = 1; //���ܸ�0 �����0  һֱ����0
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		s = s*i;
//	}
//	printf("s=%d\n", s); //�������̫�� һ�����ͷŲ��� ���
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
//	for (i = 0, k = 0; k = 0; i++, k++) //ûд�ж���� �ڶ��� k=0��λ�����ж�λ�ã�0Ϊ�� �򲻽���ѭ��
//		k++;
//
//	return 0;
//}



//int main()
//{
//	int i = 0; 
//	int j = 0;
//	for (; i < 10; i++)  //���ʡ���� i=0�������j=0 ֽ��ӡ�Ǹ��Ǻ� ������100��
//	{							//��Ϊ ��i=1ʱ j��Ϊ10 ��ô�ڶ��ֿ�ʼ Jһֱ����10 ��FOR�Ͳ�����ѭ��
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)  //�жϲ���ʡ�����Ϊ��
//		printf("hehe\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 10; i++)  //ǰ�պ�
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	//��ʼ�� �ж� ����
//	for (i = 1; i <= 10; i++)
//	{
//		if(i==5)
//			continue;// ���
//			break;  //break Ҳ��������ֹ�� ֽ��ӡ 1234 ��5��������
//		printf("%d ", i);
//	}
//	return 0;
//}





//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')  //ֻ����������ַ� ����������
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
//	printf("����������:>");
//	scanf("%s", password);
//	while (ch = getchar() != '\n' )    //  \n���ַ�����Ǳ�ڵ����һ������
//	{
//		;
//	}
//	
//	getchar();                              //�������뻺������\n
//	printf("��ȷ��(Y/F)\n");
//	qwe = getchar();
//	if (qwe =='Y')
//	{
//		printf("ȷ��ͨ��");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
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