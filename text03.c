#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//main()
//{
//	float score[6];
//	int i;
//	for (i = 0; i < 5;i++)
//	{
//		printf("please input the %d score:",i + 1);
//		scanf("%f", &score[i]);
//	}
//	score[5] = 0;
//	for (i = 0; i < 5; i++)
//	{
//		score[5] += score[i];
//	}
//		score[5] /= 5;
//		printf("%f", score[5]);
//	
//}

//int main()
//{
//	int i;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);				//���±귽ʽ��������Ԫ��
//	}
//	return 0;
//}

//��Ŀ������
//int main()
//{
//	int a = 1;
//	int arr[] = { 1,23,45,6,7 };
//	printf("%d\n", sizeof(a));//4�ֽ�
//	printf("%d\n", sizeof a);//֤��sizeofΪ�����������Ǻ���
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(arr));//4*5=20//���������С
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//��������Ԫ�ظ���
//	return 0;
//}

// ~�����ư�λȡ��
//int main()
//{
//	int a = 5;//4�ֽ�-��32bitλ
//	//00000000 00000000 00000000 00000101
//	int b = ~a;//b�з���λ���Σ����λΪ����λ��0����1����
//	//����11111111 11111111 11111111 11111010 ��һ
//	//����11111111 11111111 11111111 11111001 ����λ���䰴λȡ��
//	//ԭ��10000000 00000000 00000000 00000110 =6
//	//Դ�룬���룬����
//	//����ԭ��=����=����
//	// ����ԭ��-�����밴λȡ��������-���������λ��һ
//	//�������ڴ��д洢ʹ�ò���
//	printf("%d", b);//6
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d %d\n", a, b);//11 10
//	int c = 10;
//	int d = ++c;
//	printf("%d %d\n", c, d);//11 11
//	int e = a--;
//	int f = --a;
//	printf("%d %d %d\n",a, e, f);//9,11,9
//	return 0;
//}

//(����)
//int main()
//{
//	float a = 5.666;//float Ĭ��С�������λ
//	printf("%.4f %d", a, (int)a);//С�������ֱ��Լ��
//	return 0;
//}

//��ϵ������ < > <= >= == !=����
//�߼�������&& || ������
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c);//0�٣�1�� ���Ϊ0
//	int d = a || b;
//	printf("%d", d);//1
//
//	return 0;
//}


//����������(��Ŀ������)
//int main()
//{
//	int a = 10;
//	int b = 19;x 
//	int max = 0;
//	max = (a > b ? a : b);//if��侫���
//	printf("%d", max);
//	return 0;
//}


//���ű��ʽ
//�±������
	//int arr[10] = { 0 };//[] -�±����ò�����
	//int a = 1;
	//int b = 2;
	//int sum = Add(a, b);//�������ò�����

//�ؼ���
//int main()
//{
//	auto int a = 12;//auto�ֲ�����-�Զ����� һ��ʡ��
//	register int b = 10;//register(�Ĵ���)���齫����b����Ĵ���������ã������Ƿ����Ĵ���ȡ���ڱ���������
//	unsigned int c = 10;//�޷������Σ���ʡ��
//	typedef unsigned int u_int;//typedef �Զ�����������
//	u_int c2 = 10;
//	printf("%d", c2);
//	return 0;
//}

//�ؼ���stztic
//void test()					//void�ؼ��ֿ������Ϊ��
//{
//	//int a = 1;			//�ֲ�������������ֻ��test�������ں����������������
//	static int a = 1;		//��̬�ֲ�������static���ξֲ������ֲ������������ڱ䳤
//	a++;					//2
//	//printf("a=%d\n", a);	//2 2 2 2 2
//	printf("a=%d\n", a);	//2 3 4 5 6
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static����ȫ�ֱ���,�ı����������ʹ�ø�ȫ�ֱ���ֻ��������Դ�ļ���ʹ�ã���������
//int main()
//{
//	extern int global;			//extern-�����ⲿ����
//	printf("%d", global);
//	return 0;
//}
//static���κ����ı��˺�����������
//�ⲿ��������--���ڲ���������
//extern int Sum(int, int);
//int main()
//{
//	extern int Sum(int, int);//main�����ⲿ�ڲ���������
//	int a = 1;
//	int b = 2;
//	int sum = Sum(a, b);
//	return 0;
//}
//

//#define �����ʶ����
//#define �����--������
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define Max(X,Y) (X>Y?X:Y)  
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������ʽ
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//�귽ʽ
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//ָ��
// ָ���С��32λƽ̨4�ֽڣ���64Ϊλƽ̨8�ֽ�
//�ڴ滮����С��λ�ֽ�
//int main()
//{
//	int a = 10;
//	//ȡ��ַ��a
//	int* p=&a;		//int* ��ַ�������ͣ�ָ�����������洢������ַ
//	//printf("%p\n", &a);//32λ��ʮ�����Ʊ�ʾ
//	//printf("%p", p);
//	*p = 20;		//*-�����ò�����(��ʵ�����Ϊ*p=a);
//	printf("%d", a);
//	return 0;;
//}
//int main()
//{
//	char c = 'w';
//	char* b = &c;
//	*b = 'v';
//	printf("%c\n", c);
//	printf("%d", sizeof(b));//ָ���С��ƽ̨�й�
//	return 0;
//}

//��ϰ
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\t", sum(a));
//	}
//}