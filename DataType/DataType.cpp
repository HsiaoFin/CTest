// DataType.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<cmath>
/*
\b空格\r回车\n换行\t制表符\"双引号\\反斜杠
//const常量声明不能修改
abs绝对值  fabs绝对值double
ceil不小于的最小整数floor不大于x最大整数
cos余弦值 sin tan
log自然对数 1og10以10为底
pow(x,y)返回x^y
sqrt返回x的非负平方根
*/
const int PI = 20120517;

void NumType()
{
	//PI=0；
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

