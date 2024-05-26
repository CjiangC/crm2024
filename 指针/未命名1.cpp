#include <stdio.h>

// 定义一个抽象数据类型Complex，表示复数
typedef struct
{
	double real;   //实部 
	double imag;   //虚部 
	
}Complex;

//创建一个复数对象 
Complex creat(double real,double imag)
{
	Complex c;
	c.real = real;
	c.imag = imag;
	
	//返回一个Complex 复数对象 
	return c;   
 } 

double getReal(Complex c)
{
	return c.real; 
}
double getImag(Complex c)
{
	return c.imag; 
}

int main()
{
	Complex c = creat(3.0,8.0);
	printf("c:%f + %fi",getReal(c),getImag(c));
	
	return 0;
 } 
