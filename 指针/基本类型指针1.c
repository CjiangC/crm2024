#include <stdio.h>
int main()
{
	int *p;
	int i = 5;
	char ch  = 'A';
	
	p = &i;  // *p 以p的内容为地址的变量 
	*p= 99；
	 printf("i = %d,*p = %d\n",i,*p);
	
	return 0;
}
