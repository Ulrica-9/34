#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf ("�˳���Ϊ�Ӵ�С����ĸ�����:\n");
	printf ("�������ĸ�����:\n");
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
			printf ("����ĸ�������%d%d%d%d",d,a,b,c);
		}
		else
		{
			printf ("����ĸ�������%d%d%d%d",d,a,c,b);
		}
	}
	else
	{
		if(b>c)
		
		{	if (c>d)
			{
				printf ("����ĸ�������%d%d%d%d",a,b,c,d);
			}
			else
			{
				printf ("����ĸ�������%d%d%d%d",a,b,d,c);
			}
		}
		
	else
	{
		if(b>d)
		{
			printf ("����ĸ�������%d%d%d%d",a,c,b,d);
		}
	
	
	else
	{printf ("����ĸ�������%d%d%d%d",a,c,d,b);}
	}
	}
	
	return 0;
}



























//#include <stdio.h>
//int main()
//{
//	int a,b,c,d;
//	printf ("��������������:\n");
//	scanf ("%d",&a);
//	scanf ("%d",&b);
//	scanf ("%d",&c);
//	if (a<b)
//	{d=a;
//	    a=b;
//		b=d;
//	}
//	if (a<c)
//	{printf ("����������:%d%d%d\n",a,b,c);
//	printf ("��С����Ϊ:%d%d%d",c,a,b);}
//		else
//			if (b>c)
//			{	printf ("����������:%d%d%d\n",a,b,c);
//			printf ("��С����Ϊ:%d%d%d",a,b,c);}
//		else
//		{printf ("����������:%d%d%d\n",a,b,c);
//		printf ("��С����Ϊ:%d%d%d",a,c,b);}
//		return 0;
//}
