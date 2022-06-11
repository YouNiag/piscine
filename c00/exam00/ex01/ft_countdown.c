#include<unistd.h>

void ft_countdown()

{
	int a='9';
	while(a>='0')
	{
		write(1,&a,1);
		--a;
	}
}
int main()
{
	ft_countdown();
	write(1, "\n" ,1);
	return 0;
}
