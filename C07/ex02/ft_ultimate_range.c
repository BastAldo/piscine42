#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp_range;
	int	diff;
	
	diff = max - min;
	i = 0;
	if ((diff) > 0)
	{
		tmp_range = (int *)malloc(diff * sizeof(*tmp_range));
		if (tmp_range == NULL)
			range = NULL;
		while ((i + min) < max)
		{
			tmp_range[i] = i + min;
			i++;
		}
		*range = tmp_range;
		return (i);
	}
	else
	{
		*range = NULL;
		return (0);
	}
}

