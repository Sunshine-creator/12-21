//#include"mymath.h"
//void Menu()
//{
//	printf("#####################\n");
//	printf("####1.Add 2,Sub #############\n");
//	printf("####3.Mul 4.Div##############\n");
//	printf("########5.Exit#############\n");
//	printf("please enter your selection:");
//}
//int main()
//{
//	int quit = 0;       一个小型的模拟计算机
//	while (!quit)
//	{
//		Menu();
//		int selection = 0;
//		scanf("%d", &selection);
//		if (selection == 5)
//		{
//			printf("bye bye\n");
//			quit = 1;
//			continue;
//		}
//		int x, y = 0;
//		printf("please enter two numbers<x,y>:");
//		scanf("%d %d", &x, &y);
//		int z = 0;
//		switch (selection)
//		{
//		case 1:
//			z = MyAdd(x, y);
//			break;
//		case 2:
//			z = MySub(x, y);
//			break;
//		case 3:
//			z = MyMul(x, y);
//			break;
//		case 4:
//			z = MyDiv(x, y);
//			break;
//		default:
//			printf("your selection is error,please try again!");
//		}
//		printf("result:%d\n", z);
//		system("pause");
//		return 0;
//	}
//	 
//}
#include<stdio.h>
#include<CoreWindow.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable :4996)
#if 0
int main()
{
	char arr[8];
	memset(arr, 'x', sizeof(arr));
	system("pause");
	return 0;
}
#endif // 0
#if 0
int main()
{
	int i = 9;
	while (i >= 0)
	{
		
		printf("%d\r", i);
		Sleep(1000);
		i--;
	}
	printf("\n");
}
#endif
#if 0
//#define user "陈旺旺"
//#define password "123456"
//int main()
//{
//	char name[10];
//	char pas[10];
//	int count = 3;
//	while (count>0)
//	{
//		count--;
//		printf("please enter your name :");
//		scanf("%s", name);
//		printf("please enter your pas:");
//		scanf("%s", pas);
//		if (strcmp(user, name == 0) && strcmp(password, pas) == 0)
//		{
//			printf("login success\n");
//			break;
//		}
//		else
//		{
//			printf("name or password error,try again!\n ");
//		}
//	}
	system("pause");
	return 0;
}
#endif
int main()
{
	
	char passwd[] = "shijuntao";	
	int len = strlen(passwd);	
	int i = 0;  	
	printf("请输入登录密码：\n");  	
	for (i = 0; i < 3; i++)
	{
		char arr[32];
		scanf("%s", arr);
		if (strcmp(arr, passwd) == 0)
			break;
		else
			printf("登录失败，请重新登录！\n");
		if (i == 3)
		{
			printf("登录三次未成功，系统退出！\n");
			exit(0);
		}
		else
			printf("登陆成功！\n");
	}
	system("pause");  
	return 0; 
}

	
		
