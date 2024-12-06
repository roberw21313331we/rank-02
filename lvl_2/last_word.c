#include <unistd.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return(i);
}

void    last_word(char *str)
{
    int i;

    i = ft_strlen(str) -1;
    while(str[i]== ' ' ||str [i] == '\t')
    {
        i--;
    }
    while (i>=0 && (str[i]!= ' ' && str[i]!='\t'))
    {
        i--;
    }
    i++;
    while (str[i])
    {
        write(1,&(str[i]),1);
        i++;
    }
}

int main(int argc,char *argv[])
{
    if (argc == 2)
        last_word(argv[1]);
    write(1,"\n",1);
    return (0);
}
