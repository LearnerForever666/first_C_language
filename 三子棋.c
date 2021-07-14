#include<stdio.h>
int judge(char ch[3][3])
{
int i,z=0;
for(i=0;i<3;i++)
{
	if(ch[i][0]==ch[i][1]&&ch[i][1]==ch[i][2]&&ch[i][0]!='.'&&ch[i][1]!='.'&&ch[i][2]!='.')
{
z+=1;
}
	else if(ch[0][i]==ch[1][i]&&ch[1][i]==ch[2][i]&&ch[0][i]!='.'&&ch[1][i]!='.'&&ch[2][i]!='.')
	{
	z+=1;
	}
	else if(ch[0][0]==ch[1][1]&&ch[1][1]==ch[2][2]&&ch[0][0]!='.'&&ch[1][1]!='.'&&ch[2][2]!='.')
	{
	z+=1;
	
	}
	else if(ch[2][0]==ch[1][1]&&ch[1][1]==ch[0][2]&&ch[2][0]!='.'&&ch[1][1]!='.'&&ch[0][2]!='.')
	{
	z+=1;
	}

	if(z!=0)
	{
	z=1;
	};
	

};
return z;
};
int main()
{
	int choose,p,j=1,i,k,z=0,r=0,a,b,R,l;
	char qp[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}},player1[1],player2[1],jg[1];
	while(j==1)
	{
	for(i=0;i<3;i++)
	{
	  for(l=0;l<3;l++)
	  {
	  qp[i][l]='.';
	  
	  };
	};
	printf("欢迎来到三子棋操作模拟\n");
	printf("请分别选择棋子：1-X  2-O\n");
	j=1;
	while(j==1)
	{
	printf("player 1:>");
	scanf("%d",&choose);
	if(choose!=2&&choose!=1)
	{
	printf("输入错误\n");
	}
	else
	{
	j=0;
	}
	};
	if(choose==1)
	{
	player1[0]='X';
	}
	else
	{
	player1[0]='O';
	};
	j=1;
	while(j==1)
	{
	printf("player 2:>");
	scanf("%d",&p);
	if(p==choose)
	{
	printf("已被选择\n");
	}
	else if(p!=2&&p!=1)
	{
	printf("输入错误\n");
	}
	else
	{
	j=0;
	};

	};
	if(p==1)
	{
	player2[0]='X';
	}
	else
	{
	player2[0]='O';
	};
	for(k=0;k<3;k++)
	{
		for(i=0;i<3;i++)
	{
	printf("%c",qp[k][i]);
	printf("  ");
	
	}
		printf("\n");
	};
	z=judge(qp);
	while(z==0)
	{
	
	R=(r%2)+1;
	printf("请player%d选择棋子位置（行,列）",R);
	j=1;
	while(j==1)
	{
	scanf("%d,%d",&a,&b);
	if(qp[a-1][b-1]!='.')
	{
	printf("该位置已有棋子，请重新选择\n");
	}
	else
	{
	j=0;
	};
	}
	if(R==1)
	{
	qp[a-1][b-1]=player1[0];
	}
	else if(R==2)
	{
	qp[a-1][b-1]=player2[0];
	};
	for(k=0;k<3;k++)
	{
		for(i=0;i<3;i++)
	{
	printf("%c",qp[k][i]);
	printf("  ");
	
	}
		printf("\n");
	};
	z=judge(qp);
	if(z==1)
	{
	for(i=0;i<3;i++)
	{
	if(qp[i][0]==qp[i][1]&&qp[i][1]==qp[i][2]&&qp[i][0]!='.'&&qp[i][1]!='.'&&qp[i][2]!='.')
    {
    jg[0]=qp[i][0];
    }
	else if(qp[0][i]==qp[1][i]&&qp[1][i]==qp[2][i]&&qp[0][i]!='.'&&qp[1][i]!='.'&&qp[2][i]!='.')
	{
	jg[0]=qp[0][i];
	}
	else if(qp[0][0]==qp[1][1]&&qp[1][1]==qp[2][2]&&qp[0][0]!='.'&&qp[1][1]!='.'&&qp[2][2]!='.')
	{
	jg[0]=qp[0][0];
	
	}
	else if(qp[2][0]==qp[1][1]&&qp[1][1]==qp[0][2]&&qp[2][0]!='.'&&qp[1][1]!='.'&&qp[0][2]!='.')
	{
	jg[0]=qp[2][0];
	}
	};
	if(jg[0]==player1[0])
	{
	printf("player1胜利\n");
	}
	else if(jg[0]==player2[0])
	{
	printf("player2胜利\n");
	};
	printf("赢家已产生，游戏结束\n");
	j=0;
	};
	r++;
	if(r==9&&z!=1)
	{
	printf("游戏结束，平局，请开始下一局\n");
	j=1;
	z=1;
	};
	};
	};
	
return 0;
}

