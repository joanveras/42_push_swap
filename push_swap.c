#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		size;
	t_list	*a;
	t_list	*b;

	if (argc == 1 || !argv[1][0])
		return (1);
	if (invalid_arg(argv))
		abort();
	a = initialize_list();
	b = initialize_list();
	fill_stack(argc, argv, a);
	index_stack(a);
	if (duplicate(a))
		abort();
	size = list_size(a);
	if (size == 2 || size == 3)
		sort_2_3(a, b, size);
	else if (size == 4 || size == 5)
		sort_4_5(a, b, size);
	else if (size > 5)
		radix_sort(a, b);
	free_list(a);
	free_list(b);
	return (0);
}
