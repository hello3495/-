#include "AI.h"             //声明

int main()                  //主函数
{
	int shunxu,i,j,k;       //定义int参数
   char qq,ww;
	AI xxx;
	xxx.room();
	cout<<"请选择下棋顺序：1.先下  2.后下"<<endl;     //选择先手后手
	cin>>shunxu;
	if(shunxu==1)                    //先手
	{k=xxx.choice();
	   if(k==1){qq='X';ww='O';}
	   else  {qq='O';ww='X';}
	   for(i=0;i<5;i++)
	   { 
		   xxx.human(qq);
		   j=xxx.judge(qq,ww);
	     if(j==1)
	       break;
		 if(i==4&&j==0) 	{cout<<"平手"<<endl;break;}       //输出平手
		 xxx.computer(ww);
		 j=xxx.judge(qq,ww);
	    if(j==1)
	     break;

	   } 
	   


   	  }
	else if(shunxu==2)            //后手
	{ k=xxx.choice();
	    if(k==1){qq='X';ww='O';}
	      else  {qq='O';ww='X';}
	    for(i=0;i<5;i++)
	    { 
			xxx.computer(ww);
			j=xxx.judge(qq,ww);
		  if(j==1)
	       break;
		  if(i==4&&j==0) 	{cout<<"平局"<<endl;break;}
		  xxx.human(qq);
		  j=xxx.judge(qq,ww);
	      if(j==1)
	       break;
	     }  
		
	  }
}