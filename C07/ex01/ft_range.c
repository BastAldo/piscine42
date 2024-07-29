#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	diff;
	
	diff = max - min;
	i = 0;
	if ((diff) > 0)
	{
		range = (int *)malloc(diff * sizeof(*range));
		if (range == NULL)
			return (NULL);
		while ((i + min) < max)
		{
			range[i] = i + min;
			i++;
		}
		return (range);
	}
	else
		return (NULL);
}

