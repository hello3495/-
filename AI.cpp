#include "AI.h"          //����

AI::AI(void)             //��ʼ������
{
	for(i=0;i<3;i++)
      { for(j=0;j<3;j++)
          {
	         a[i][j]=' ';
          }
	  }
}

AI::~AI(void)
{
}

void AI::room()              //������
{
	cout<<"         �˻�����"<<endl;
	cout<<"���������ԩ������ԩ�������"<<endl;
	cout<<"��      ��      ��      ��"<<endl;
	cout<<"��  "<<a[0][0]<<"   ��  "<<a[0][1]<<"   ��  "<<a[0][2]<<"   ��"<<endl;
	cout<<"��      ��      ��      ��"<<endl;
	cout<<"�ǩ������橥�����橥������"<<endl;
	cout<<"��      ��      ��      ��"<<endl;
	cout<<"��  "<<a[1][0]<<"   ��  "<<a[1][1]<<"   ��  "<<a[1][2]<<"   ��"<<endl;
	cout<<"��      ��      ��      ��"<<endl;
	cout<<"�ǩ������贈�����贈������"<<endl;
	cout<<"��      ��      ��      ��"<<endl;
	cout<<"��  "<<a[2][0]<<"   ��  "<<a[2][1]<<"   ��  "<<a[2][2]<<"   ��"<<endl;
	cout<<"��      ��      ��      ��"<<endl;
	cout<<"���������ߩ������ߩ�������"<<endl;
}



int AI::choice()       //ѡ���������
{
	int m,n;
	cout<<"��ѡ��������ӣ�1.X��2.O"<<endl;
	cin>>m;
	return m;
}



void AI::computer(char x)    //���Գ���
{
	 char n;
     int aaa,bbb;
     for(;;)
   {
     srand(time(NULL));
     aaa=rand()%3;
     bbb=rand()%3;
     if(a[aaa][bbb]==' ')
       {
         a[aaa][bbb]=x;
         room();
         break;
	    }
      else
	     continue;
   }
}



void AI::human(char x)      //�������ӵ�λ��
{
	int row,column;
    cout<<"���������λ�ã�"<<endl;
    cout<<"��:";
    cin>>row;
    cout<<"��:";
    cin>>column;
    if(a[row-1][column-1]!=' ')
        cout<<"��λ���Ѿ������ӣ����������룡"<<endl;
    else
     { 
		 a[row-1][column-1]=x;
         room();
     }
}



int AI::judge(char xx,char yy)     //�ж�ʤ��
{
	int n=0;
	for(i=0;i<3;i++)
		{
			if((a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][0]!=' '&&a[i][0]==xx)||(a[0][i]==a[1][i]&&a[2][i]==a[1][i]&&a[0][i]!=' '&&a[1][i]==xx)||(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]!=' '&&a[1][1]==xx)||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[0][2]!=' '&&a[1][1]==xx))
			{cout<<"��ʤ��"<<endl;n=1;break;}
			if((a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][0]!=' '&&a[i][0]==yy)||(a[0][i]==a[1][i]&&a[2][i]==a[1][i]&&a[0][i]!=' '&&a[1][i]==yy)||(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]!=' '&&a[1][1]==yy)||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[0][2]!=' '&&a[1][1]==yy))
	         {cout<<"ϧ�ܣ�"<<endl;n=1;break;}
	    }
	return n;
}