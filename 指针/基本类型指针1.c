#include <stdio.h>
int main()
{
	int *p;
	int i = 5;
	char ch  = 'A';
	
	p = &i;  // *p ��p������Ϊ��ַ�ı��� 
	*p= 99��
	 printf("i = %d,*p = %d\n",i,*p);
	
	return 0;
}
