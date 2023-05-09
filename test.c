
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
