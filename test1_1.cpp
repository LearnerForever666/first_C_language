#include<stdio.h>
int main()
{
	int i,j=0,s;//s���ڽ��տγ�����
	char ah[35][50];
	float ch[2][35],ave,smpt,sum;//aveΪ�ۺ�ƽ����,smptΪѧ���ܺ�,sumΪѧ��ѧ���ۺ��ܷ�
	printf("��ӭʹ�ñ�����\n");
	j=0,i=0;
	while(j==0)
	{
	printf("�������Ŀ����:>");
	scanf("%s",&ah[i][0]);
	i++;
	printf("�Ƿ����¼�룿1-�ǣ�0-��  :>");
	scanf("%d",&j);
	};
	s=i;
	j=0,i=0;
	while(j==0)
	{
	printf("������%s�ɼ�:>",ah[i]);
	scanf("%f",&ch[0][i]);
	i++;
	if(i==s)
	  j=1;
	};
	j=0,i=0;
	while(j==0)
	{
	printf("������%sѧ��:>",ah[i]);
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
	printf("�ɼ�������\n");
	printf("�γ�       ");
	for(i=0;i<s;i++)
	{
	printf("%s            ",ah[i]);
	};
	printf("\n");
	printf("�ɼ�     ");
	for(i=0;i<s;i++)
	{
	printf("%f        ",ch[0][i]);
	};
	printf("\n");
	printf("ѧ��     ");
	for(i=0;i<s;i++)
	{
	printf("%f        ",ch[1][i]);
	};
	printf("\n");
	printf("ѧ���ۺ��ܷ�Ϊ%f\n",sum);
	printf("ѧ��ƽ����Ϊ%f\n",ave);



return 0;
}
