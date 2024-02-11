#include "../../includes/push_swap.h"

void	abort(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

t_bool	duplicate(t_list *a)
{
	t_node	*current_1;
	t_node	*current_2;

	current_1 = a->head;
	while (current_1)
	{
		current_2 = a->head;
		while (current_2 != current_1)
		{
			if (current_2->content == current_1->content)
				return (TRUE);
			current_2 = current_2->next;
		}
		current_1 = current_1->next;
	}
	return (FALSE);
}

t_bool	invalid_arg(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] == ' ' || argv[i][j] == '\t')
			j++;
		if (!argv[i][j])
			return (TRUE);
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j])
				|| argv[i][j] == ' '
				|| argv[i][j] == '\t')
				j++;
			else
				return (TRUE);
		}
		i++;
	}
	return (FALSE);
}

char	*remove_extra_spaces(char *s)
{
	int		i;
	int		j;
	
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		while (s[i] && (s[i] != ' ' && s[i] != '\t'))
		{
			s[j] = s[i];
			if (s[i + 1] == ' ' || s[i + 1] == '\t')
			{
				j++;
				s[j] = ' ';
			}
			j++;
			i++;
		}
	}
	if (s[j - 1] == ' ' || s[j - 1] == '\t')
		j--;
	s[j] = '\0';
	return (s);
}
