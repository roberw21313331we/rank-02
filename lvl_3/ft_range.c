#include <stdio.h>
#include <stdlib.h>

int range(int n,int m)
{
    int max;
    int c;
    int min;

    c = 0;
    if (n == m)
        return (1);
    else
    {
        if (n<m)
        {
            min = n;
            max = m;
        }
        else
        {
            min = m;
            max = n;
        }
        while (min<=max)
        {
            min++;
            c++;
        }
    }
    return (c);
}
int     *ft_range(int start, int end)
{
    int *nums;
    int len;
    int i;

    i = 0;
    len = range(start,end);
    nums = malloc(len*sizeof(int));
    if (!nums)
        return (NULL);
    if (start == end)
    {
        nums[0]=start;
        return(nums);
    }
    else
    {
        while (i<len)
        {
            if (start<end)
            {
                nums[i] = start;
                start++;
                i++;
            }
            else
            {
                nums[i] = start;
                start--;
                i++;
            }
        }
        return (nums);
    }
}


int main (void)
{
    int len = range(0,-3);
    int i = 0;
    int *nums = ft_range(0,-3);

    while (i<len)
    {
        printf("%d \n",nums[i]);
        i++;
    }
    return(0);
}