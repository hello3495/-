#pragma once
#include<iostream>             //包含文件
#include <time.h>
using namespace std;
class AI                      //创建AI类
{
private:                      //私有函数
	char a[3][3];    
    int i,j;
    char aa,bb;
public:                       //公有函数
	AI(void);
	~AI(void);
	void room();
	int choice();
	void computer(char x);
	void human(char x);
	int judge(char cc,char vv);
};

