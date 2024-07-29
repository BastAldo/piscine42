#include <stdlip.h>

int	*ft_range(int min, int max)
{
	int	i;
	char	*range

	i = 0;
	if ((max - min) > 0)
	{
		range = (char *)malloc((max - min) *sizeof(char));
		if (range == NULL)
			return (NULL);
	}
	else
		return (NULL);
}
