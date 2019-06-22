#include "AI.h"          //声明

AI::AI(void)             //初始化函数
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

void AI::room()              //画棋盘
{
	cout<<"         人机下棋"<<endl;
	cout<<"┏━━━┰━━━┰━━━┓"<<endl;
	cout<<"┃      ┃      ┃      ┃"<<endl;
	cout<<"┃  "<<a[0][0]<<"   ┃  "<<a[0][1]<<"   ┃  "<<a[0][2]<<"   ┃"<<endl;
	cout<<"┃      ┃      ┃      ┃"<<endl;
	cout<<"┣━━━╂━━━╂━━━┫"<<endl;
	cout<<"┃      ┃      ┃      ┃"<<endl;
	cout<<"┃  "<<a[1][0]<<"   ┃  "<<a[1][1]<<"   ┃  "<<a[1][2]<<"   ┃"<<endl;
	cout<<"┃      ┃      ┃      ┃"<<endl;
	cout<<"┣━━━╋━━━╋━━━┫"<<endl;
	cout<<"┃      ┃      ┃      ┃"<<endl;
	cout<<"┃  "<<a[2][0]<<"   ┃  "<<a[2][1]<<"   ┃  "<<a[2][2]<<"   ┃"<<endl;
	cout<<"┃      ┃      ┃      ┃"<<endl;
	cout<<"┗━━━┻━━━┻━━━┛"<<endl;
}



int AI::choice()       //选择你的棋子
{
	int m,n;
	cout<<"请选择你的棋子：1.X，2.O"<<endl;
	cin>>m;
	return m;
}



void AI::computer(char x)    //电脑程序
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



void AI::human(char x)      //输入棋子的位置
{
	int row,column;
    cout<<"请输入棋的位置："<<endl;
    cout<<"行:";
    cin>>row;
    cout<<"列:";
    cin>>column;
    if(a[row-1][column-1]!=' ')
        cout<<"此位置已经有棋子，请重新输入！"<<endl;
    else
     { 
		 a[row-1][column-1]=x;
         room();
     }
}



int AI::judge(char xx,char yy)     //判定胜负
{
	int n=0;
	for(i=0;i<3;i++)
		{
			if((a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][0]!=' '&&a[i][0]==xx)||(a[0][i]==a[1][i]&&a[2][i]==a[1][i]&&a[0][i]!=' '&&a[1][i]==xx)||(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]!=' '&&a[1][1]==xx)||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[0][2]!=' '&&a[1][1]==xx))
			{cout<<"获胜！"<<endl;n=1;break;}
			if((a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][0]!=' '&&a[i][0]==yy)||(a[0][i]==a[1][i]&&a[2][i]==a[1][i]&&a[0][i]!=' '&&a[1][i]==yy)||(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]!=' '&&a[1][1]==yy)||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[0][2]!=' '&&a[1][1]==yy))
	         {cout<<"惜败！"<<endl;n=1;break;}
	    }
	return n;
}