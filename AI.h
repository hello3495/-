#pragma once
#include<iostream>             //�����ļ�
#include <time.h>
using namespace std;
class AI                      //����AI��
{
private:                      //˽�к���
	char a[3][3];    
    int i,j;
    char aa,bb;
public:                       //���к���
	AI(void);
	~AI(void);
	void room();
	int choice();
	void computer(char x);
	void human(char x);
	int judge(char cc,char vv);
};

