#include <stdio.h>
void main()
{
	char c;
	int letter=0,number=0,space=0,other=0;
	while((c=getchar())!='\n')
	{
		if(c>'A'&&c<'Z'||c>'a'&&c<'z')
		letter++;
		else
		if(c>'0'&&c<'9')
		number++;
		else
		if(c==32)
		space++;
		else other++;
	}
	printf("Ӣ����ĸ������%d\n���ָ�����%d\n�ո������%d\n�����ַ�������%d",letter,number,space,other);
}
