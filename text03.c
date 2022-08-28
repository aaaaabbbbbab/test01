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
//		printf("%d ", arr[i]);				//以下标方式访问数组元素
//	}
//	return 0;
//}

//单目操作符
//int main()
//{
//	int a = 1;
//	int arr[] = { 1,23,45,6,7 };
//	printf("%d\n", sizeof(a));//4字节
//	printf("%d\n", sizeof a);//证明sizeof为操作符并不是函数
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(arr));//4*5=20//计算数组大小
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组元素个数
//	return 0;
//}

// ~二进制按位取反
//int main()
//{
//	int a = 5;//4字节-》32bit位
//	//00000000 00000000 00000000 00000101
//	int b = ~a;//b有符号位整形，最高位为符号位（0正，1负）
//	//补码11111111 11111111 11111111 11111010 减一
//	//反码11111111 11111111 11111111 11111001 符号位不变按位取反
//	//原码10000000 00000000 00000000 00000110 =6
//	//源码，反码，补码
//	//正数原码=反码=补码
//	// 负数原码-》反码按位取反，反码-》补码最低位加一
//	//负数在内存中存储使用补码
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

//(类型)
//int main()
//{
//	float a = 5.666;//float 默认小数点后六位
//	printf("%.4f %d", a, (int)a);//小数点后面直接约掉
//	return 0;
//}

//关系操作符 < > <= >= == !=六种
//逻辑操作符&& || ！三种
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c);//0假，1真 结果为0
//	int d = a || b;
//	printf("%d", d);//1
//
//	return 0;
//}


//条件操作符(三目操作符)
//int main()
//{
//	int a = 10;
//	int b = 19;x 
//	int max = 0;
//	max = (a > b ? a : b);//if语句精简版
//	printf("%d", max);
//	return 0;
//}


//逗号表达式
//下标操作符
	//int arr[10] = { 0 };//[] -下标引用操作符
	//int a = 1;
	//int b = 2;
	//int sum = Add(a, b);//函数引用操作符

//关键字
//int main()
//{
//	auto int a = 12;//auto局部变量-自动变量 一般省略
//	register int b = 10;//register(寄存器)建议将变量b放入寄存器方便调用，最终是否进入寄存器取决于编译器决定
//	unsigned int c = 10;//无符号整形，可省略
//	typedef unsigned int u_int;//typedef 自定义类型名称
//	u_int c2 = 10;
//	printf("%d", c2);
//	return 0;
//}

//关键字stztic
//void test()					//void关键字可以理解为空
//{
//	//int a = 1;			//局部变量生命周期只在test打括号内函数被调用完后销毁
//	static int a = 1;		//静态局部变量，static修饰局部变量局部变量生命周期变长
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
//static修饰全局变量,改变变量作用域，使得该全局变量只能在所在源文件中使用，不得外用
//int main()
//{
//	extern int global;			//extern-声明外部符号
//	printf("%d", global);
//	return 0;
//}
//static修饰函数改变了函数链接属性
//外部链接属性--》内部链接属性
//extern int Sum(int, int);
//int main()
//{
//	extern int Sum(int, int);//main函数外部内部声明都行
//	int a = 1;
//	int b = 2;
//	int sum = Sum(a, b);
//	return 0;
//}
//

//#define 定义标识常量
//#define 定义宏--带参数
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
//	//函数方式
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏方式
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//指针
// 指针大小在32位平台4字节，在64为位平台8字节
//内存划分最小单位字节
//int main()
//{
//	int a = 10;
//	//取地址符a
//	int* p=&a;		//int* 地址变量类型，指针类型用来存储变量地址
//	//printf("%p\n", &a);//32位用十六进制表示
//	//printf("%p", p);
//	*p = 20;		//*-解引用操作符(其实可理解为*p=a);
//	printf("%d", a);
//	return 0;;
//}
//int main()
//{
//	char c = 'w';
//	char* b = &c;
//	*b = 'v';
//	printf("%c\n", c);
//	printf("%d", sizeof(b));//指针大小与平台有关
//	return 0;
//}

//练习
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