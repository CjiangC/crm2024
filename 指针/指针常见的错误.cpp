# include <stdio.h>
int main()
{
	
	int * p;  //p是变量名，int * 表示 p 变量存放的是int 类型 变量的地址 
			  
	int i = 5;
	
	*p = i;	//将 i 的值赋值给 指针变量p指向的地址赋值 
	printf("%d\n",*p);
 } 
