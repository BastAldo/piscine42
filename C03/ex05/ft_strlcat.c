unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	f_d;
	unsigned int	f_s;

	i = ft_strlen(dest);
	y = 0;
	f_d = i;
	f_s = ft_strlen(src);
	if (size < 1)
		return (f_s + size);
	while (src[y] && i < size - 1)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = 0;
	if (size < f_d)
		return (f_s + size);
	else
		return (f_d + f_s);
}