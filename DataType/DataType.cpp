// DataType.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<cmath>
/*
\b�ո�\r�س�\n����\t�Ʊ��\"˫����\\��б��
//const�������������޸�
abs����ֵ  fabs����ֵdouble
ceil��С�ڵ���С����floor������x�������
cos����ֵ sin tan
log��Ȼ���� 1og10��10Ϊ��
pow(x,y)����x^y
sqrt����x�ķǸ�ƽ����
*/
const int PI = 20120517;

void NumType()
{
	//PI=0��
	cout<<"1.23e+5="<<1.23e+5<<endl;
	cout<<"1.23e5="<<1.23e5<<endl;
	cout<<"1.23e-3="<<1.23e-3<<endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
	NumType();
	system("pause");
	return 0;
}

