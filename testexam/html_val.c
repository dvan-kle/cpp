#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int find_len(char *str, int i)
{
	int len = 0;
	while (str[i] != '>' || str[i] != '\0' || str[i] != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

int html_val(char *str)
{
	char **arr = malloc(sizeof (char *) * 256);
	int i = 0;
	int count = 0;
	int len;
	char *tmp;
	while (str[i])
	{
		if (str[i] == '<')
		{
			len = find_len(str, i);
			strncpy(tmp, str + i, len);
			if (strncmp(tmp, "img", 3) == 0)
				break;
			strncpy(arr[count++], tmp, len);
			free(tmp);
		}
		
	}


}


void	html_val(int ac, char **av)
{
	int i = 1;
	while (i < ac)
	{
		if (check_argument(av[i]) == 1)
			write(1, "OK\n", 3);
		else
			write(1, "ERROR\n", 6);
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac > 1)
		html_val(ac, av);
	else
		write(1, "\n", 1);
	return (0);
}
