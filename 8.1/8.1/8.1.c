#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>//ע���ӡstrlenʱҪ����ͷ�ļ�
#include <stdio.h>//��㣺ʹ��printf��������Ҫ�ڿ�ͷ����ôһ�У�����
int main()
{
	char arr[] = "abc";//�ַ����Ľ�β������һ��"\0"
	char arr1[] = { 'a','b','c','\0'};//�ɵ���������������һ���ַ�����˫��������������һ���ַ�
    printf("%d\n",strlen(arr));//strlen���ڲ�������
    printf("%d\n",strlen(arr1));//�״�㣺���ַ�ʱ��ӡ�����Ļ������ֵ����������ʱ�ᾯ��
	return 0;
}