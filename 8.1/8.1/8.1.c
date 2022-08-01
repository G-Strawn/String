#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>//注意打印strlen时要引用头文件
#include <stdio.h>//错点：使用printf函数必须要在开头有这么一行！！！
int main()
{
	char arr[] = "abc";//字符串的结尾隐藏了一个"\0"
	char arr1[] = { 'a','b','c','\0'};//由单引号引起来的是一个字符，由双引号括起来的是一串字符
    printf("%d\n",strlen(arr));//strlen用于测量长度
    printf("%d\n",strlen(arr1));//易错点：单字符时打印出来的会是随机值，而在运行时会警告
	return 0;
}