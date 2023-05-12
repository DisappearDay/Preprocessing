
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	//文件名的路径
//	printf("%s\n", __FILE__);
//    //行号
//	printf("%d\n", __LINE__);
//	//日期
//	printf("%d\n", __DATE__);
//	//时间
//	printf("%d\n", __TIME__);
//	//函数名
//	printf("%d\n", __FUNCTION__);
//	//如果编译器遵循ANSI C ，其值为1，否则未定义----=linux下的gcc遵循，而vs不遵循
//	//printf("%d\n", __STDC__);
//
//	return 0;
//}

//int main()
//{
//	int arr[1024] = { 0 };
//	int i = 0;
//	FILE* pf = fopen("test.log", "w");
//	for (i=0;i<10;i++)
//	{
//		arr[i] = i;
//	}
//	
//	for (i=0;i<10;i++)
//	{
//		printf("%d ", arr[i]);
//		fprintf(pf, "file:%s line:%d data:%d time:%d i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	return 0;
//}




#define STR "hehe"
#define reg register
#define do_forever for(;;)

int main()
{
	do_forever
		;
	/*reg int a;
	printf("%s\n", STR);*/
	return 0;

}
#include <stdio.h>

#define SQART(x) ((x)*(x))
#define DOUBLE(x) ((x)+(x))
//int main()
//{
//	//int ret = SQART(5);
//	
//	//int ret = 5 * 5;
//	
//	//int ret = SQART(5 + 1);
//	
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("%d\n", ret);
//	//字符串常量的值不被替换
//	printf("SQART=%d\n", ret);
//	return 0;
//}

#define PRINTF(x) printf("the number of " #x " is %d\n",x)

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("the number of ""a"" is %d\n",a);
//	printf("the number of ""b"" is %d\n",b);
//	PRINTF(a);
//	PRINTF(b);
//	return 0;
//}


#define CAT(x,y)  x##y

//int main()
//{
//	int CLASS2020 = 2024;
//	
//	printf("%d\n",CAT(CLASS,2020));//2024
//	return 0;
//}

#define MAX(x,y) (x)>(y)?(x):(y);

//int main()
//{
//	//int a = 10;
//	//int b = a + 1;//1
//	//int b = a++;//2--带有副作用，a的值改变了
//
//
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	printf("%d\n", max);//12
//	printf("%d\n", a);  //11
//	printf("%d\n", b);  //13
//	return 0;
//}

int Max(int x, int y)
{
	return (x > y ? x : y);
}

#define MAX(X,Y) (X)>(Y)?(X):(Y);

int main()
{
	int a = 20;
	int b = 40;
	double c = 1.0f;
	double d = 4.0f;
	//此时，函数不能被执行，因为宏不分参数类型，而函数，强制了参数类型
	int max = Max(c, d);
	printf("%d\n", max);
	int max = MAX(c, d);
	printf("%d\n", max);

	/*int max = Max(a, b);
	printf("%d\n", max);
	int max = MAX(a, b);
	printf("%d\n", max);*/
	return 0;
}
