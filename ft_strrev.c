#include "ft_printf.h"

char *ft_strrev(char *s)
{
    char    *z;
    int     begin;
    int     end;
    
    if(!(z = malloc(ft_strlen(s) * sizeof(char))))
        return (NULL);

    begin = 0;
    end = (ft_strlen(s) - 1);
    
    while (begin < ft_strlen(s))
        z[begin++] = s[end--];

    z[begin] = '\0';
    
    return (z);
}