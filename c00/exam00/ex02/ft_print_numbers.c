#include<unistd.h>

void ft_print_numbers(void)
{
	int a='0';
	while(a<='9')
	{
		write(1,&a,1);
		a++;
	}
}
int main()
{
	ft_print_numbers();
	write(1, "\n" ,1);
	return 0;
}
