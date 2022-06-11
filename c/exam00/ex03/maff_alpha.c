#include<unistd.h>

void maff_alpha()

{
	char a;
	char b;
	
	a='a';
	b='B';
	
	while(a<='z' && b<='Z')
	
	{
		write(1, &a,1);
		write(1, &b,1);
		a=a+2;
		b=b+2;
	}
}
int main()
{
	maff_alpha();
	write(1, "\n",1);
	return 0;
}
