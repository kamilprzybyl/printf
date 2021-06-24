#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
// #define NO_FLAG		0
// #define MINUS_SIGN	1
// #define ZERO_FLAG	2

typedef struct	s_info
{
	int	width;
	int	is_preceision;
	int	width_val;
	int	precision_val;
	int	is_zero_flag;
	int	is_minus_flag;
	int	zero_flag_val;

}				t_info;

typedef struct	s_call_function
{
	void	(*fct)(t_info *info, va_list arg);
	char	spec;
}				t_call_fucntion;

int		ft_printf(const char *restrict format, ...);

void	handle_width(t_info *info, char *s, char spec);
char	*handle_precision(t_info *info, char *s, char spec);
void	handle_zero_flag(t_info *info, int spec);

void	handle_hex(t_info *info, va_list arg);
void	handle_heX(t_info *info, va_list arg);
void	handle_string(t_info *info, va_list arg);
void	handle_pointer(t_info *info, va_list arg);
void	handle_integer(t_info *info, va_list arg);
void	handle_char(t_info *info, va_list arg);
void	handle_u_int(t_info *info, va_list arg);
void	handle_modulo(t_info *info, va_list arg);

int		check_flag(t_info *info, int flag);
void	check_width(t_info *info, const char *format, int *i);
void	check_precision(t_info *info, va_list arg, const char *format, int *i);
int		check_spec(t_info *info, va_list arg, char spec);

int		ft_isdigit(int c);
void	ft_putchar(char c);
void	ft_putstr(char *s);
char	*ft_dec_to_hex(unsigned long long n, int is_uppercase);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
void	ft_strrev(char *s);
int		ft_atoi(const char *str);
char	*ft_utoa(unsigned int n);
char	*ft_itoa(int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_memcmp(const void *s1, const void *s2, unsigned long n);
void	*ft_memset(void *b, int c, unsigned long len);

#endif
