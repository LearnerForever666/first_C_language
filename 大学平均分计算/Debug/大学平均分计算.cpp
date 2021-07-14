#include<stdio.h>
int main()
{
	int i,j=0,s;//s用于接收课程数量
	char ah[35][50];
	float ch[2][35],ave,smpt,sum;//ave为折合平均分,smpt为学分总和,sum为学科学分折合总分
	printf("欢迎使用本工具\n");
	j=0,i=0;
	while(j==0)
	{
	printf("请输入科目名称:>");
	scanf("%s",&ah[i][0]);
	i++;
	printf("是否结束录入？1-是，0-否  :>");
	scanf("%d",&j);
	};
	s=i;
	j=0,i=0;
	while(j==0)
	{
	printf("请输入%s成绩:>",ah[i]);
	scanf("%f",&ch[0][i]);
	i++;
	if(i==s)
	  j=1;
	};
	j=0,i=0;
	while(j==0)
	{
	printf("请输入%s学分:>",ah[i]);
	scanf("%f",&ch[1][i]);
	i++;
	if(i==s)
		j=1;
	};
	sum=0,smpt=0;
	for(i=0;i<s;i++)
	{
	sum+=ch[0][i]*ch[1][i];
	smpt+=ch[1][i];
	};
	ave=sum/smpt;
	printf("成绩单如下\n");
	printf("课程       ");
	for(i=0;i<s;i++)
	{
	printf("%s            ",ah[i]);
	};
	printf("\n");
	printf("成绩     ");
	for(i=0;i<s;i++)
	{
	printf("%f        ",ch[0][i]);
	};
	printf("\n");
	printf("学分     ");
	for(i=0;i<s;i++)
	{
	printf("%f        ",ch[1][i]);
	};
	printf("\n");
	printf("学分折合总分为%f\n",sum);
	printf("学分平均分为%f\n",ave);



return 0;
}
