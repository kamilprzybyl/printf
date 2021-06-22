#include <stdio.h>
#include "ft_printf.h"

int main()
{
	// ft_printf("char test %c %c %c\n", 'a', 60, 'l');
	// ft_printf("unsigned char test %u\n", 'a');
	// ft_printf("hex test %x\n", 12);
	// ft_printf("heX test %X\n", 12);
	// int i = 21414;
	// ft_printf("pointer test %p\n", i);
	// ft_printf("integer test %d\n", 60);
	// ft_printf("integer test %s\n", "String");
	// printf("printf = [%5s]\n", "abc");
	// ft_printf("ft_printf = [%5s]\n", "abc");
	printf("str\n");
	printf("printf =    [%.3s]\n", "abcde");
	ft_printf("ft_printf = [%.3s]\n", "abcde");
	printf("printf =    [%.22s]\n", "abcde");
	ft_printf("ft_printf = [%.22s]\n", "abcde");
	printf("printf =    [%15.22s]\n", "abcde");
	ft_printf("ft_printf = [%15.22s]\n", "abcde");
	printf("printf =    [%15.3s]\n", "abcde");
	ft_printf("ft_printf = [%15.3s]\n", "abcde");
	printf("printf =    [%15.0s]\n", "abcde");
	ft_printf("ft_printf = [%15.0s]\n", "abcde");
	printf("printf =    [%50.50s]\n", "abcde");
	ft_printf("ft_printf = [%50.50s]\n", "abcde");
	printf("printf =    [%.0s]\n", "abcde");
	ft_printf("ft_printf = [%.0s]\n", "abcde");
	printf("int\n");
	printf("printf =    [%05d]\n", 10);
	ft_printf("ft_printf = [%05d]\n", 10);

	printf("printf =    [%05.5d]\n", 10);
	ft_printf("ft_printf = [%05.5d]\n", 10);

	printf("printf =    [%05.0d]\n", 10);
	ft_printf("ft_printf = [%05.0d]\n", 10);
	
	printf("printf =    [%05.2d]\n", 10);
	ft_printf("ft_printf = [%05.2d]\n", 10);
	
	printf("printf =    [%05.3d]\n", 10);
	ft_printf("ft_printf = [%05.3d]\n", 10);

	printf("printf =    [%5d]\n", 123);
	ft_printf("ft_printf = [%5d]\n", 123);

	printf("printf =    [%.3d]\n", 10);
	ft_printf("ft_printf = [%.3d]\n", 10);

	printf("printf =    [%.3d]\n", 12450);
	ft_printf("ft_printf = [%.3d]\n", 12450);

	printf("printf =    [%05.10d]\n", 10);
	ft_printf("ft_printf = [%05.10d]\n", 10);

	printf("printf =    [%05d]\n", 0);
	ft_printf("ft_printf = [%05d]\n", 0);
	
	printf("printf =    [%20.0d]\n", 0);
	ft_printf("ft_printf = [%20.0d]\n", 0);
	// printf("[%.5s]\n", "abcdefg");
	// printf("[%.22s]\n", "abcdefg");
	// printf("[%9.3s]\n", "abcdefg");

	return 0;
}