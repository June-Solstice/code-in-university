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
	printf("英文字母个数是%d\n数字个数是%d\n空格个数是%d\n其他字符个数是%d",letter,number,space,other);
}
