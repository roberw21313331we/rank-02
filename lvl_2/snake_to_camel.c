#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen (char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        i++;
        str++;
    }
    return (i);
}

int ft_countchr(char *str,char c)
{
    int i;

    i = 0;
    while (*str)
    {
        if (*str == c)
            i++;
        str++;
    }
    return (i);
}
char    *stc (char *str)
{
    int len = ft_strlen(str) - ft_countchr(str,'_');
    int i;
    char *r = (char *)malloc(len);
    if (!r)
        return(NULL);
    int j;

    j = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == '_')
        {
            i++;
            if (str[i])
                r[j++] = str[i] - 32;
        }
        else
        {
            r[j] = str[i];
            j++;
        }
        i++;
    } 
    r[len] = '\0';
    return(r);
}

int main(int argc,char *argv[])
{
    if (argc == 2)
        printf(stc(argv[1]));
    write(1,"\n",1);
    return (0);
}