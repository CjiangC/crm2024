#include <stdio.h>

// ����һ��������������Complex����ʾ����
typedef struct
{
	double real;   //ʵ�� 
	double imag;   //�鲿 
	
}Complex;

//����һ���������� 
Complex creat(double real,double imag)
{
	Complex c;
	c.real = real;
	c.imag = imag;
	
	//����һ��Complex �������� 
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
