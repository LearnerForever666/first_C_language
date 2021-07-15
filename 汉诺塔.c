#include<stdio.h>
int oth(char a,char b,char c,char x,char y)
{
  if(x!='a'&&y!='a')
	  return 'a';
  else if(x!='b'&&y!='b')
	  return 'b';
  else if(x!='c'&&y!='c')
	  return 'c';

} 
void whole_move(int n,int a,int b,int c,int x,int y)//x代表起始柱子，y代表终止柱子
{
	char m;
	if(n==1)
	{
	printf("1：%c->%c\n",x,y);
	}
	else
	{
	  m=y;
	  y=oth(a,b,c,x,y);
	  whole_move(n-1,a,b,c,x,y);
	  printf("%d：%c->%c\n",n,x,m);
	  whole_move(n-1,a,b,c,y,m);
	}

}
int main()
{
	int n;
	char a='a',b='b',c='c';
	printf("请输入汉诺塔的层数:>");
	scanf("%d",&n);
	whole_move(n,a,b,c,a,c);
	

return 0;
}

