#include<unistd.h>

void only_a()

{  	
	char a='a';
	write(1, &a, 1);
}
int main()
{
	only_a();
	return 0;
}
