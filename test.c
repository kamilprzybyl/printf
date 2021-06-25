#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("basic\n");
<<<<<<< HEAD
	// printf("%5c", '\0');
	// ft_printf("%5c", '\0');
	
	// printf("%-5c", '\0');
	// ft_printf("%-5c", '\0');
	
	// printf("%%\n");
	// ft_printf("%%\n");
=======
	printf("%%\n");
	ft_printf("%%\n");
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476

	// printf("%\n");
	// ft_printf("%\n");

<<<<<<< HEAD
	printf("%05%\n");
	ft_printf("%05%\n");
	

=======
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
	printf("%10%\n");
	ft_printf("%10%\n");
	
	printf("%-10%d\n");
	ft_printf("%-10%d\n");

	printf("%ddddd\n", 2);
	ft_printf("%ddddd\n", 2);
	
	printf("str\n");
	// printf("%-32s", NULL);
	// ft_printf("%-32s", NULL);

	// printf("%2s", NULL);
	// ft_printf("%2s", NULL);

	// printf("%32s\n", NULL);
	// ft_printf("%32s\n", NULL);

	// printf("hello, %s.\n", NULL);
	// ft_printf("hello, %s.\n", NULL);

	printf("hello, %s.", "gavin\n");
	ft_printf("hello, %s.", "gavin\n");
	
	printf("printf =    [%.3s]\n", "abcde");
	ft_printf("ft_printf = [%.3s]\n", "abcde");

	printf("printf =    [%.22s]\n", "abcde");
	ft_printf("ft_printf = [%.22s]\n", "abcde");

	printf("printf =    [%15.22s]\n", "abcde");
	ft_printf("ft_printf = [%15.22s]\n", "abcde");

	printf("printf =    [%15.3s]\n", "abcde");
	ft_printf("ft_printf = [%15.3s]\n", "abcde");
	
	printf("printf =    [%-15.3s]\n", "abcde");
	ft_printf("ft_printf = [%-15.3s]\n", "abcde");

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
	
	// printf("printf =    [%-05.3d]\n", 10);
	// ft_printf("ft_printf = [%-05.3d]\n", 10);
	
	printf("printf =    [%-5.3d]\n", 10);
	ft_printf("ft_printf = [%-5.3d]\n", 10);

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
	
	printf("char\n");
	printf("printf =    [%2c]\n", 'a');
	ft_printf("ft_printf = [%2c]\n", 'a');
	
	printf("printf =    [%1c]\n", 'a');
	ft_printf("ft_printf = [%1c]\n", 'a');
	
	printf("printf =    [%-20c]\n", 'a');
	ft_printf("ft_printf = [%-20c]\n", 'a');

	printf("hex\n");
	printf("printf =    [%x]\n", 442);
	ft_printf("ft_printf = [%x]\n", 442);
	
	printf("printf =    [%-20x]\n", 442);
	ft_printf("ft_printf = [%-20x]\n", 442);
	
	printf("printf =    [%20x]\n", 442);
	ft_printf("ft_printf = [%20x]\n", 442);
	
	printf("printf =    [%0x]\n", 442);
	ft_printf("ft_printf = [%0x]\n", 442);
	
	printf("printf =    [%3x]\n", 442);
	ft_printf("ft_printf = [%3x]\n", 442);
	
	printf("printf =    [%4x]\n", 442);
	ft_printf("ft_printf = [%4x]\n", 442);
	
	printf("printf =    [%10.5x]\n", 442);
	ft_printf("ft_printf = [%10.5x]\n", 442);
	
	printf("printf =    [%-10.5x]\n", 442);
	ft_printf("ft_printf = [%-10.5x]\n", 442);

	printf("printf =    [%X]\n", 442);
	ft_printf("ft_printf = [%X]\n", 442);
	
	printf("printf =    [%-20X]\n", 442);
	ft_printf("ft_printf = [%-20X]\n", 442);
	
	printf("printf =    [%20X]\n", 442);
	ft_printf("ft_printf = [%20X]\n", 442);
	
	printf("printf =    [%0X]\n", 442);
	ft_printf("ft_printf = [%0X]\n", 442);
	
	printf("printf =    [%3X]\n", 442);
	ft_printf("ft_printf = [%3X]\n", 442);
	
	printf("printf =    [%4X]\n", 442);
	ft_printf("ft_printf = [%4X]\n", 442);
	
	printf("printf =    [%10.5X]\n", 442);
	ft_printf("ft_printf = [%10.5X]\n", 442);
	
	printf("printf =    [%-10.5X]\n", 442);
	ft_printf("ft_printf = [%-10.5X]\n", 442);

	printf("pointer\n");
	char *str = "442";
<<<<<<< HEAD
	printf("%p\n", NULL);
	ft_printf("%p\n", NULL);

=======
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476
	printf("printf =    [%20p]\n", str);
	ft_printf("ft_printf = [%20p]\n", str);
	
	printf("printf =    [%-20p]\n", str);
	ft_printf("ft_printf = [%-20p]\n", str);
	
	printf("printf =    [%5p]\n", str);
	ft_printf("ft_printf = [%5p]\n", str);
	
	printf("printf =    [%1p]\n", str);
	ft_printf("ft_printf = [%1p]\n", str);

<<<<<<< HEAD
	printf("*\n");
	printf("%.*d\n", 5, 0);
	ft_printf("%.*d\n", 5, 0);

	printf("%.*d\n", -2, 0);
	ft_printf("%.*d\n", -2, 0);

	printf("u\n");
	static unsigned int		mx_u = 235;
	printf("%u\n", mx_u);
	ft_printf("%u\n", mx_u);

=======
>>>>>>> 1f7f56129f211a86118272203cca54f46bf58476

	return 0;
}