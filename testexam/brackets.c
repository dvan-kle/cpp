#include <unistd.h>

int check_argument(char *str)
{
	char arr[999];
	int	i = 0;
	int count = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			arr[count++] = str[i];
		if (str[i] == ')')
		{
			if (count == 0)
				return (0);
			if (arr[count - 1] == '(')
				count--;
			else if (arr[count - 1] != '(')
				return (0);
		}
		if (str[i] == '}')
		{
			if (count == 0)
				return (0);
			if (arr[count - 1] == '{')
				count--;
			else if (arr[count - 1] != '{')
				return (0);
		}
		if (str[i] == ']')
		{
			if (count == 0)
				return (0);
			if (arr[count - 1] == '[')
				count--;
			else if (arr[count - 1] != '[')
				return (0);
		}
		i++;
	}
	if (count > 0)
		return (0);
	return (1);

}
void	brackets(int ac, char **av)
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
		brackets(ac, av);
	else
		write(1, "\n", 1);
	return (0);
}