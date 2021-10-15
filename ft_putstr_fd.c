#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	size_t i;

	if (!s)
		return; // это так должно быть? 
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}