#include "AI.h"             //����

int main()                  //������
{
	int shunxu,i,j,k;       //����int����
   char qq,ww;
	AI xxx;
	xxx.room();
	cout<<"��ѡ������˳��1.����  2.����"<<endl;     //ѡ�����ֺ���
	cin>>shunxu;
	if(shunxu==1)                    //����
	{k=xxx.choice();
	   if(k==1){qq='X';ww='O';}
	   else  {qq='O';ww='X';}
	   for(i=0;i<5;i++)
	   { 
		   xxx.human(qq);
		   j=xxx.judge(qq,ww);
	     if(j==1)
	       break;
		 if(i==4&&j==0) 	{cout<<"ƽ��"<<endl;break;}       //���ƽ��
		 xxx.computer(ww);
		 j=xxx.judge(qq,ww);
	    if(j==1)
	     break;

	   } 
	   


   	  }
	else if(shunxu==2)            //����
	{ k=xxx.choice();
	    if(k==1){qq='X';ww='O';}
	      else  {qq='O';ww='X';}
	    for(i=0;i<5;i++)
	    { 
			xxx.computer(ww);
			j=xxx.judge(qq,ww);
		  if(j==1)
	       break;
		  if(i==4&&j==0) 	{cout<<"ƽ��"<<endl;break;}
		  xxx.human(qq);
		  j=xxx.judge(qq,ww);
	      if(j==1)
	       break;
	     }  
		
	  }
}