#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf ("此程序为从大到小输出四个整数:\n");
	printf ("请输入四个整数:\n");
	scanf ("%d",&a);
	scanf ("%d",&b);
	scanf ("%d",&c);
	scanf ("%d",&d);
	if (a<b)
	{
		f=a;
	    a=b;
		b=f;
	}
	if (a<c)
	{
		e=a;
		a=c;
		c=e;
	}
	if (a<d)
	{
		if (b>c)
		{
			printf ("输出四个整数：%d%d%d%d",d,a,b,c);
		}
		else
		{
			printf ("输出四个整数：%d%d%d%d",d,a,c,b);
		}
	}
	else
	{
		if(b>c)
		
		{	if (c>d)
			{
				printf ("输出四个整数：%d%d%d%d",a,b,c,d);
			}
			else
			{
				printf ("输出四个整数：%d%d%d%d",a,b,d,c);
			}
		}
		
	else
	{
		if(b>d)
		{
			printf ("输出四个整数：%d%d%d%d",a,c,b,d);
		}
	
	
	else
	{printf ("输出四个整数：%d%d%d%d",a,c,d,b);}
	}
	}
	
	return 0;
}



























//#include <stdio.h>
//int main()
//{
//	int a,b,c,d;
//	printf ("请输入三个整数:\n");
//	scanf ("%d",&a);
//	scanf ("%d",&b);
//	scanf ("%d",&c);
//	if (a<b)
//	{d=a;
//	    a=b;
//		b=d;
//	}
//	if (a<c)
//	{printf ("这三个数是:%d%d%d\n",a,b,c);
//	printf ("大小排序为:%d%d%d",c,a,b);}
//		else
//			if (b>c)
//			{	printf ("这三个数是:%d%d%d\n",a,b,c);
//			printf ("大小排序为:%d%d%d",a,b,c);}
//		else
//		{printf ("这三个数是:%d%d%d\n",a,b,c);
//		printf ("大小排序为:%d%d%d",a,c,b);}
//		return 0;
//}
