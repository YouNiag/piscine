#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
	char a='z';
	while(a>='a')
	{
		write(1,&a,1);
		--a;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
