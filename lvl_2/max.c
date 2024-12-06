#include <stdio.h>
#include <stdlib.h>
int max(int *tab, unsigned int len)
{
	int result;
	unsigned int i = 0;
	
	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return result;
}


int main()
{
    int array1[] = {1, 3, 7, 2, 9, 4}; // Caso normal
    int array2[] = {-5, -2, -8, -1};   // Todos números negativos
    int array3[] = {42};               // Un solo elemento
    int *array4 = NULL;                // Caso con puntero NULL
    unsigned int len1 = 6;
    unsigned int len2 = 4;
    unsigned int len3 = 1;
    unsigned int len4 = 0;

    printf("Max of array1: %d\n", max(array1, len1)); // Debería imprimir 9
    printf("Max of array2: %d\n", max(array2, len2)); // Debería imprimir -1
    printf("Max of array3: %d\n", max(array3, len3)); // Debería imprimir 42
    printf("Max of array4: %d\n", max(array4, len4)); // Debería imprimir 0

    return 0;
}