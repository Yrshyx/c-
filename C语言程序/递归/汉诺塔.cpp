#include<stdio.h>
void hanoi(int n,char a,char b,char c);
long count;
int main()
{
	int h;
	printf("�����뺺ŵ��Բ�̵�������");
	scanf("%d",&h);
	count=0;
	hanoi(h,'A','B','C');
	return 0; 
}
void hanoi(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("��%d�Σ�%c��-->%c��\n",++count,a,c);
	}
	else
	{
		hanoi(n-1,a,c,b);
		printf("��%d�Σ�%c��-->%c��\n",++count,a,c);
		hanoi(n-1,b,a,c);
	}
}
