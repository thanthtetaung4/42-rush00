/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taung <taung@student.42singapore.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:06:41 by taung             #+#    #+#             */
/*   Updated: 2024/03/03 16:15:42 by taung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y);

void	write_first_row(int *j_ptr, int *x_ptr);
void	write_mid_rows(int *j_ptr, int *x_pt);
void	write_last_row(int *j_ptr, int *x_pt);

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	*i_ptr;
	int	*j_ptr;
	int	*x_ptr;

	i_ptr = &i;
	j_ptr = &j;
	x_ptr = &x;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0)
			{
				write_first_row(j_ptr,x_ptr);
			}
			else if (i > 0 && i < y-1)
			{
				write_mid_rows(j_ptr,x_ptr);
			}
			else
			{
				write_last_row(j_ptr,x_ptr);
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	write_first_row(int *j_ptr, int *x_ptr)
{
	if (*j_ptr == 0)
		ft_putchar('A');
	else if (*j_ptr == *x_ptr - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	write_mid_rows(int *j_ptr, int *x_ptr)
{
	if ((*j_ptr == 0) || (*j_ptr == *x_ptr - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');

}

void	write_last_row(int *j_ptr, int *x_ptr)
{
	if (*j_ptr == 0)
		ft_putchar('C');
	else if (*j_ptr == *x_ptr - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}
